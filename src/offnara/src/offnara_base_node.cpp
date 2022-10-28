#include "offnara_base.h"

int main(int argc, char** argv )
{
    ros::init(argc, argv, "offnara_base_node");
    offnaraBase offnara;
    ros::spin();
    return 0;
}
