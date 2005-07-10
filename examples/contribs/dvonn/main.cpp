#include "dvonnwindowimpl.h"
#include "dvonnviewer.h"
#include "game.h"
#include <qapplication.h>
#include <qmenubar.h>
#include <qaction.h>

using namespace dvonn;

int main(int argc, char * argv[])
{
  // Read command lines arguments.
  QApplication application(argc,argv);
  Game game;

  DvonnWindowImpl mainWindow(&game,NULL,"mainWindow");
  mainWindow.show();
  application.setMainWidget(&mainWindow);

  // Run main loop.
  return application.exec();
}
