/********************************************************************************
** Form generated from reading UI file 'text-source-toolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXT_2D_SOURCE_2D_TOOLBAR_H
#define UI_TEXT_2D_SOURCE_2D_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextSourceToolbar
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *selectFont;
    QPushButton *selectColor;
    QWidget *emptySpace;
    QLineEdit *text;

    void setupUi(QWidget *TextSourceToolbar)
    {
        if (TextSourceToolbar->objectName().isEmpty())
            TextSourceToolbar->setObjectName(QString::fromUtf8("TextSourceToolbar"));
        TextSourceToolbar->resize(726, 22);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextSourceToolbar->sizePolicy().hasHeightForWidth());
        TextSourceToolbar->setSizePolicy(sizePolicy);
        TextSourceToolbar->setMinimumSize(QSize(0, 22));
        TextSourceToolbar->setMaximumSize(QSize(16777215, 22));
        TextSourceToolbar->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(TextSourceToolbar);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        selectFont = new QPushButton(TextSourceToolbar);
        selectFont->setObjectName(QString::fromUtf8("selectFont"));
        selectFont->setMinimumSize(QSize(0, 22));
        selectFont->setMaximumSize(QSize(16777215, 22));

        horizontalLayout->addWidget(selectFont);

        selectColor = new QPushButton(TextSourceToolbar);
        selectColor->setObjectName(QString::fromUtf8("selectColor"));
        selectColor->setMinimumSize(QSize(0, 22));
        selectColor->setMaximumSize(QSize(16777215, 22));

        horizontalLayout->addWidget(selectColor);

        emptySpace = new QWidget(TextSourceToolbar);
        emptySpace->setObjectName(QString::fromUtf8("emptySpace"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(emptySpace->sizePolicy().hasHeightForWidth());
        emptySpace->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(emptySpace);

        text = new QLineEdit(TextSourceToolbar);
        text->setObjectName(QString::fromUtf8("text"));
        text->setMinimumSize(QSize(0, 22));
        text->setMaximumSize(QSize(16777215, 22));

        horizontalLayout->addWidget(text);


        retranslateUi(TextSourceToolbar);

        QMetaObject::connectSlotsByName(TextSourceToolbar);
    } // setupUi

    void retranslateUi(QWidget *TextSourceToolbar)
    {
        selectFont->setText(QCoreApplication::translate("TextSourceToolbar", "Basic.PropertiesWindow.SelectFont", nullptr));
        selectColor->setText(QCoreApplication::translate("TextSourceToolbar", "Basic.PropertiesWindow.SelectColor", nullptr));
        (void)TextSourceToolbar;
    } // retranslateUi

};

namespace Ui {
    class TextSourceToolbar: public Ui_TextSourceToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT_2D_SOURCE_2D_TOOLBAR_H
