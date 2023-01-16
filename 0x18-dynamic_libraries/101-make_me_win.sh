#!/bin/bash
wget -P /tmp/ https://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@github.com/JeresonAdj/alx-low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so

