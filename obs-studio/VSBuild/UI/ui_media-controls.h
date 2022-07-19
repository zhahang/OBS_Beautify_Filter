/********************************************************************************
** Form generated from reading UI file 'media-controls.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIA_2D_CONTROLS_H
#define UI_MEDIA_2D_CONTROLS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "clickable-label.hpp"
#include "media-slider.hpp"

QT_BEGIN_NAMESPACE

class Ui_MediaControls
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *playPauseButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *previousButton;
    QPushButton *stopButton;
    QPushButton *nextButton;
    MediaSlider *slider;
    QSpacerItem *horizontalSpacer_2;
    QLabel *timerLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    ClickableLabel *durationLabel;
    QWidget *emptySpaceAgain;

    void setupUi(QWidget *MediaControls)
    {
        if (MediaControls->objectName().isEmpty())
            MediaControls->setObjectName(QString::fromUtf8("MediaControls"));
        MediaControls->resize(888, 22);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MediaControls->sizePolicy().hasHeightForWidth());
        MediaControls->setSizePolicy(sizePolicy);
        MediaControls->setMinimumSize(QSize(0, 22));
        MediaControls->setMaximumSize(QSize(16777215, 22));
        MediaControls->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(MediaControls);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        playPauseButton = new QPushButton(MediaControls);
        playPauseButton->setObjectName(QString::fromUtf8("playPauseButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(playPauseButton->sizePolicy().hasHeightForWidth());
        playPauseButton->setSizePolicy(sizePolicy1);
        playPauseButton->setMinimumSize(QSize(22, 22));
        playPauseButton->setMaximumSize(QSize(22, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/media/media_restart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        playPauseButton->setIcon(icon);
        playPauseButton->setIconSize(QSize(20, 20));
        playPauseButton->setFlat(true);

        horizontalLayout->addWidget(playPauseButton);

        horizontalSpacer = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        previousButton = new QPushButton(MediaControls);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));
        sizePolicy1.setHeightForWidth(previousButton->sizePolicy().hasHeightForWidth());
        previousButton->setSizePolicy(sizePolicy1);
        previousButton->setMinimumSize(QSize(22, 22));
        previousButton->setMaximumSize(QSize(22, 22));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/images/media/media_previous.svg"), QSize(), QIcon::Normal, QIcon::Off);
        previousButton->setIcon(icon1);
        previousButton->setIconSize(QSize(20, 20));
        previousButton->setFlat(true);

        horizontalLayout->addWidget(previousButton);

        stopButton = new QPushButton(MediaControls);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        sizePolicy1.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy1);
        stopButton->setMinimumSize(QSize(22, 22));
        stopButton->setMaximumSize(QSize(22, 22));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/images/media/media_stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon2);
        stopButton->setIconSize(QSize(20, 20));
        stopButton->setFlat(true);

        horizontalLayout->addWidget(stopButton);

        nextButton = new QPushButton(MediaControls);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        sizePolicy1.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy1);
        nextButton->setMinimumSize(QSize(22, 22));
        nextButton->setMaximumSize(QSize(22, 22));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/images/media/media_next.svg"), QSize(), QIcon::Normal, QIcon::Off);
        nextButton->setIcon(icon3);
        nextButton->setIconSize(QSize(20, 20));
        nextButton->setFlat(true);

        horizontalLayout->addWidget(nextButton);

        slider = new MediaSlider(MediaControls);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMinimumSize(QSize(0, 22));
        slider->setMaximumSize(QSize(16777215, 22));
        slider->setMaximum(1024);
        slider->setTracking(false);
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(slider);

        horizontalSpacer_2 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        timerLabel = new QLabel(MediaControls);
        timerLabel->setObjectName(QString::fromUtf8("timerLabel"));
        sizePolicy.setHeightForWidth(timerLabel->sizePolicy().hasHeightForWidth());
        timerLabel->setSizePolicy(sizePolicy);
        timerLabel->setMinimumSize(QSize(0, 22));
        timerLabel->setMaximumSize(QSize(16777215, 22));

        horizontalLayout->addWidget(timerLabel);

        horizontalSpacer_3 = new QSpacerItem(4, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label = new QLabel(MediaControls);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 22));
        label->setMaximumSize(QSize(16777215, 22));

        horizontalLayout->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(4, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        durationLabel = new ClickableLabel(MediaControls);
        durationLabel->setObjectName(QString::fromUtf8("durationLabel"));
        sizePolicy.setHeightForWidth(durationLabel->sizePolicy().hasHeightForWidth());
        durationLabel->setSizePolicy(sizePolicy);
        durationLabel->setMinimumSize(QSize(0, 22));
        durationLabel->setMaximumSize(QSize(16777215, 22));

        horizontalLayout->addWidget(durationLabel);

        emptySpaceAgain = new QWidget(MediaControls);
        emptySpaceAgain->setObjectName(QString::fromUtf8("emptySpaceAgain"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(emptySpaceAgain->sizePolicy().hasHeightForWidth());
        emptySpaceAgain->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(emptySpaceAgain);


        retranslateUi(MediaControls);

        QMetaObject::connectSlotsByName(MediaControls);
    } // setupUi

    void retranslateUi(QWidget *MediaControls)
    {
#if QT_CONFIG(tooltip)
        playPauseButton->setToolTip(QCoreApplication::translate("MediaControls", "ContextBar.MediaControls.RestartMedia", nullptr));
#endif // QT_CONFIG(tooltip)
        playPauseButton->setText(QString());
#if QT_CONFIG(shortcut)
        playPauseButton->setShortcut(QCoreApplication::translate("MediaControls", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        previousButton->setToolTip(QCoreApplication::translate("MediaControls", "ContextBar.MediaControls.PlaylistPrevious", nullptr));
#endif // QT_CONFIG(tooltip)
        previousButton->setText(QString());
#if QT_CONFIG(shortcut)
        previousButton->setShortcut(QCoreApplication::translate("MediaControls", "P", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        stopButton->setToolTip(QCoreApplication::translate("MediaControls", "ContextBar.MediaControls.StopMedia", nullptr));
#endif // QT_CONFIG(tooltip)
        stopButton->setText(QString());
#if QT_CONFIG(shortcut)
        stopButton->setShortcut(QCoreApplication::translate("MediaControls", "S", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        nextButton->setToolTip(QCoreApplication::translate("MediaControls", "ContextBar.MediaControls.PlaylistNext", nullptr));
#endif // QT_CONFIG(tooltip)
        nextButton->setText(QString());
#if QT_CONFIG(shortcut)
        nextButton->setShortcut(QCoreApplication::translate("MediaControls", "N", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(accessibility)
        slider->setAccessibleName(QCoreApplication::translate("MediaControls", "ContextBar.MediaControls.BlindSeek", nullptr));
#endif // QT_CONFIG(accessibility)
        timerLabel->setText(QCoreApplication::translate("MediaControls", "--:--:--", nullptr));
        label->setText(QCoreApplication::translate("MediaControls", "/", nullptr));
        durationLabel->setText(QCoreApplication::translate("MediaControls", "--:--:--", nullptr));
        (void)MediaControls;
    } // retranslateUi

};

namespace Ui {
    class MediaControls: public Ui_MediaControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIA_2D_CONTROLS_H
