#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

int main() {
    cv::Mat img = cv::imread("rpg_icon.png");
    cv::imshow("Sample Code",img);
    cv::waitKey();
    return 0;
}
