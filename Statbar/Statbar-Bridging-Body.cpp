//
//  Statbar-Bridging-Body.c
//  Statbar
//
//  Created by bsdelf on 2020/3/25.
//  Copyright © 2020 bsdelf. All rights reserved.
//

#include "NetworkMonitor.hpp"

extern "C" {
    void* NetworkMonitorCreate() {
        return new NetworkMonitor();
    }
    
    void NetworkMonitorDestroy(void* ptr) {
        delete static_cast<NetworkMonitor*>(ptr);
    }
    
    struct NetworkStats NetworkMonitorStats(void* ptr) {
        auto self = static_cast<NetworkMonitor*>(ptr);
        return self->Stats();
    }
}
