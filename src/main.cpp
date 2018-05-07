#include <QApplication>
#include <iostream>
#include <string>
#include "includes/HCV.hpp"


int main(int argc, char *argv[]) {
    int is_url = 0;

    if (argc < 5) {
        std::cout << "Usage: <width> <height> <html> <is_url:int>" << std::endl;
        return 0;
    }

    is_url = std::stoi(argv[4]);

    QUrl* url = nullptr;

    if (is_url)
        url = new QUrl(argv[3]);

    QApplication a(argc, argv);

    HCV * mainwin = new HCV(
        std::stoi(argv[1]),
        std::stoi(argv[2]),
        "",
        std::string(argv[3]),
        url
    );

    mainwin->show();

    return a.exec();
}
