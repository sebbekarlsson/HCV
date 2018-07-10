#include "includes/HCV.hpp"


/**
 * @param int width - Window width
 * @param int height - Window height
 * @param std::string title - Window title
 * @param std::string contents - Content to be rendered
 * @param *Qurl url - url to open
 */
HCV::HCV(
    int width,
    int height,
    std::string title,
    std::string contents,
    QUrl* url
) {
    this->setFixedSize(width, height);

    this->setWindowTitle(tr(title.c_str()));

    this->webview = new QWebEngineView(this);

    if (url == nullptr)
        this->webview->setHtml(contents.c_str());
    else
        this->webview->setUrl(*url);
    
    this->setCentralWidget(webview);
}
