//
// Created by Good_Pudge.
//

#ifndef OKHTTPFORK_UDPSOCKET_HPP
#define OKHTTPFORK_UDPSOCKET_HPP

#include <ohf/InetAddress.hpp>
#include <ohf/Socket.hpp>

namespace ohf {
    namespace udp {
        class Socket : public ohf::Socket {
        public:
            Socket();

            virtual void bind(const InetAddress &address, Uint16 port);

            void unbind();

            void send(const InetAddress &address, Uint16 port, const char *data, size_t size);

            void send(const InetAddress &address, Uint16 port, const std::vector<Int8> &data);

            void send(const InetAddress &address, Uint16 port, const std::string &data);

            Int32 receive(InetAddress &address, Uint16 &port, char *data, Int32 size);

            Int32 receive(InetAddress &address, Uint16 &port, std::vector<Int8> &data);

            Int32 receive(InetAddress &address, Uint16 &port, std::string &data, Int32 size);
        };
    }
}

#endif //OKHTTPFORK_UDPSOCKET_HPP
