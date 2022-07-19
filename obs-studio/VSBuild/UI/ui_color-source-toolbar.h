/********************************************************************************
** Form generated from reading UI file 'color-source-toolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOR_2D_SOURCE_2D_TOOLBAR_H
#define UI_COLOR_2D_SOURCE_2D_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorSourceToolbar
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *color;
    QPushButton *choose;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ColorSourceToolbar)
    {
        if (ColorSourceToolbar->objectName().isEmpty())
            ColorSourceToolbar->setObjectName(QString::fromUtf8("ColorSourceToolbar"));
        ColorSourceToolbar->resize(565, 22);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ColorSourceToolbar->sizePolicy().hasHeightForWidth());
        ColorSourceToolbar->setSizePolicy(sizePolicy);
        ColorSourceToolbar->setMinimumSize(QSize(0, 22));
        ColorSourceToolbar->setMaximumSize(QSize(16777215, 22));
        ColorSourceToolbar->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(ColorSourceToolbar);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        color = new QLabel(ColorSourceToolbar);
        color->setObjectName(QString::fromUtf8("color"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(color->sizePolicy().hasHeightForWidth());
        color->setSizePolicy(sizePolicy1);
        color->setMinimumSize(QSize(80, 22));
        color->setMaximumSize(QSize(16777215, 22));
        color->setText(QString::fromUtf8("color here"));
        color->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(color);

        choose = new QPushButton(ColorSourceToolbar);
        choose->setObjectName(QString::fromUtf8("choose"));
        choose->setMinimumSize(QSize(0, 22));
        choose->setMaximumSize(QSize(16777215, 22));

        horizontalLayout->addWidget(choose);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(ColorSourceToolbar);

        QMetaObject::connectSlotsByName(ColorSourceToolbar);
    } // setupUi

    void retranslateUi(QWidget *ColorSourceToolbar)
    {
        choose->setText(QCoreApplication::translate("ColorSourceToolbar", "Basic.PropertiesWindow.SelectColor", nullptr));
        (void)ColorSourceToolbar;
    } // retranslateUi

};

namespace Ui {
    class ColorSourceToolbar: public Ui_ColorSourceToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOR_2D_SOURCE_2D_TOOLBAR_H
