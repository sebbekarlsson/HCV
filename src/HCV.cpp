#include "includes/HCV.hpp"


/**
 * @param int width - Window width
 * @param int height - Window height
 * @param std::string title - Window title
 * @param std::string contents - Content to be rendered
 */
HCV::HCV(int width, int height, std::string title, std::string contents) {
    this->setFixedSize(width, height);

    setWindowTitle(tr(title.c_str()));

    m_pWebView = new QWebEngineView(this);
    m_pWebView->setHtml(contents.c_str());
    this->setCentralWidget(m_pWebView);
}
