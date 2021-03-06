#ifndef WLAN_CRACK_PacketSender_H
#define WLAN_CRACK_PacketSender_H

#pragma once

#include <tins/tins.h>

namespace WLAN_CRACK
{
    class PacketSender
    {
    protected:
        Tins::PacketSender m_sender;
    public:
        PacketSender(const char *interface);
        ~PacketSender();
	};
}

#endif