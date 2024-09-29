#include "../include/MakerbaseNetwork.h"

std::string mks_eth0_ip = "";
std::string mks_page_internet_ip = "127.0.0.1";
std::string get_wlan0_ip() {
    char result[MAX_FILE_LEN] = {0};
    std::string cmd = "ifconfig wlan0 | awk 'NR==2{print $2}' | tr -d '\n\r'";
    execute_cmd(cmd.data(), result);
    printf("%s", result);
    return result;
}

std::string get_eth0_ip() {
    char result[MAX_FILE_LEN] = {0};
    std::string cmd = "ifconfig eth0 | awk 'NR==2{print $2}' | tr -d '\n\r'";
    execute_cmd(cmd.data(), result);
    printf("%s", result);
    return result;
}
