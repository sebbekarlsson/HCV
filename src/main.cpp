#include <QApplication>
#include <iostream>
#include <string>
#include "includes/HCV.hpp"


int main(int argc, char *argv[]) {
    std::string title = "";
    std::string contents = "";
    int width = 640;
    int height = 480;
    QUrl* url = nullptr;

    for (int i = 0; i < argc; i++) {
        std::string argument = argv[i];
        std::string value = "";

        if (argument.find("-") != std::string::npos) {
            argument.erase(0, 1);
            value = argv[std::min(argc, i + 1)];

            if (argument == "u")
                url = new QUrl(value.c_str());

            if (argument == "c")
                contents = value;

            if (argument == "w")
                width = std::stoi(value);

            if (argument == "h")
                height = std::stoi(value);
        }
    }
    
    QApplication a(argc, argv);

    HCV * mainwin = new HCV(
        width,
        height,
        title,
        contents,
        url
    );

    mainwin->show();

    return a.exec();
}
