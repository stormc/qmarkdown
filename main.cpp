#include "mainwindow.h"

#include <QApplication>
#include <QResource>
#include <QString>

int main(int argc, char *argv[]) {
  QCoreApplication::setOrganizationName("qMarkdown");
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  QApplication app(argc, argv);

  QString file;

  QResource::registerResource("images.rcc");

  if (argc == 2) {
    file = argv[1];
  } else
    file = ":/help.md";

  MainWindow window(&file);
  window.show();

  return app.exec();
}
