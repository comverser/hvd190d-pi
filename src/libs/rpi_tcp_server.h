#ifndef RPI_TCP_SERVER_H
#define RPI_TCP_SERVER_H 

/* 
A simple server for Raspberry Pi application
rpi_tcp_server.cpp
H. Shin
Korea Optron Corp.
2019-05-27

Adapted from D. Thiebaut, http://www.science.smith.edu/dftwiki/index.php/Tutorial:_Client/Server_on_the_Raspberry_Pi
The port number used in 58262
The server waits for a connection request from a client.
The server assumes the client will send positive integers, which it sends back multiplied by 2.
*/

namespace rpi
{
    constexpr int size_buffer = 8; // internal linkage, more than 8 due to segmentation fault
    extern char data_tcp[size_buffer];

    void init_tcp_server();
    void run_tcp_server();
    void get_data_tcp_server();
    void send_data_tcp_server(); 
    void terminate_tcp_server();

    void debug_test();
}

#endif