// https://www.codewars.com/kata/52e88b39ffb6ac53a400022e

std::string uint32_to_ip(uint32_t ip) {
    std::string ipAddress = "";
    int bytes[4];

    bytes[0] = ip & 0xFF;
    bytes[1] = (ip >> 8) & 0xFF;
    bytes[2] = (ip >> 16) & 0xFF;
    bytes[3] = (ip >> 24) & 0xFF;

    ipAddress = std::to_string(bytes[3]) + '.' + std::to_string(bytes[2]) + '.' + std::to_string(bytes[1]) + '.' + std::to_string(bytes[0]);

    return ipAddress;
}
