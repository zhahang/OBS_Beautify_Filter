/********************************************************************************
** Form generated from reading UI file 'browser-source-toolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSER_2D_SOURCE_2D_TOOLBAR_H
#define UI_BROWSER_2D_SOURCE_2D_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BrowserSourceToolbar
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *refresh;
    QFrame *line;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *BrowserSourceToolbar)
    {
        if (BrowserSourceToolbar->objectName().isEmpty())
            BrowserSourceToolbar->setObjectName(QString::fromUtf8("BrowserSourceToolbar"));
        BrowserSourceToolbar->resize(628, 22);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BrowserSourceToolbar->sizePolicy().hasHeightForWidth());
        BrowserSourceToolbar->setSizePolicy(sizePolicy);
        BrowserSourceToolbar->setMinimumSize(QSize(0, 22));
        BrowserSourceToolbar->setMaximumSize(QSize(16777215, 22));
        BrowserSourceToolbar->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(BrowserSourceToolbar);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        refresh = new QPushButton(BrowserSourceToolbar);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setMinimumSize(QSize(0, 22));
        refresh->setMaximumSize(QSize(16777215, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        refresh->setIcon(icon);
        refresh->setFlat(true);
        refresh->setProperty("themeID", QVariant(QString::fromUtf8("refreshIconSmall")));
        refresh->setProperty("themeID2", QVariant(QString::fromUtf8("contextBarButton")));

        horizontalLayout->addWidget(refresh);

        line = new QFrame(BrowserSourceToolbar);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(BrowserSourceToolbar);

        QMetaObject::connectSlotsByName(BrowserSourceToolbar);
    } // setupUi

    void retranslateUi(QWidget *BrowserSourceToolbar)
    {
        refresh->setText(QCoreApplication::translate("BrowserSourceToolbar", "RefreshBrowser", nullptr));
        (void)BrowserSourceToolbar;
    } // retranslateUi

};

namespace Ui {
    class BrowserSourceToolbar: public Ui_BrowserSourceToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSER_2D_SOURCE_2D_TOOLBAR_H
