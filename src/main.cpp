#include <QApplication>
#include <iostream>
#include <string>
#include <vector>
#include "includes/HCV.hpp"


int main(int argc, char *argv[]) {
    std::string title = "";
    std::string contents = "";
    int width = 640;
    int height = 480;
    QUrl* url = nullptr;
    
    // available arguments
    std::vector<std::string> arguments = {
        "-w",
        "-h",
        "-u",
        "-c"
    };

    // parsing the arguments
    for (int i = 0; i < argc; i++) {
        std::string argument = std::string(argv[i]);
        std::string value = "";

        // check if found argument is available
        if (
            std::find(
                arguments.begin(),
                arguments.end(),
                argument
            ) != arguments.end()
        ) {
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

    // create the window
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
