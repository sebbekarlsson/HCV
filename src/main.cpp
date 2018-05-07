#include <QApplication>
#include <iostream>
#include <string>
#include "includes/HCV.hpp"


int main(int argc, char *argv[]) {
    if (argc < 3)
        return 0;

    QApplication a(argc, argv);

    HCV * mainwin = new HCV(std::stoi(argv[1]), std::stoi(argv[2]), "", std::string(argv[3]));

    mainwin->show();

    return a.exec();
}
