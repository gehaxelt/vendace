#ifndef SCREENSHOT_WINDOW_HPP
#define SCREENSHOT_WINDOW_HPP

#include <QMainWindow>
#include <QLabel>
#include <QRubberBand>
#include <QPoint>

/**
 * A window that captures the current screen and displays an interface for cropping the resulting
 * screenshot.
 */
class ScreenshotWindow : public QMainWindow {

    Q_OBJECT

    public:
        ScreenshotWindow();

    protected:
        void createUi();
        void selectCrop();

        void keyReleaseEvent(QKeyEvent *event);
        void mousePressEvent(QMouseEvent *event);
        void mouseMoveEvent(QMouseEvent *event);
        void mouseReleaseEvent(QMouseEvent *event);

    private:
        QPixmap mScreenshot;
        QLabel *mScreenshotLabel;
        QLabel *mHelpLabel;
        QRubberBand *mCropper;

        QPoint mCropOrigin;

};

#endif
