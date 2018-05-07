#include "includes/HCV.hpp"


/**
 * @param int width - Window width
 * @param int height - Window height
 * @param std::string title - Window title
 * @param std::string contents - Content to be rendered
 * @param *Qurl url - url to open
 */
HCV::HCV(int width, int height, std::string title, std::string contents, QUrl* url) {
    this->setFixedSize(width, height);

    setWindowTitle(tr(title.c_str()));

    m_pWebView = new QWebEngineView(this);

    if (url == nullptr) {
        m_pWebView->setHtml(contents.c_str());
    } else {
        m_pWebView->setUrl(*url);
    }
    
    this->setCentralWidget(m_pWebView);
}
