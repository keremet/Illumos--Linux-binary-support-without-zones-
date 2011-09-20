#!/bin/sh
cd /export/home/keremet/work/gsoc/2011_07_31/printer
LD_LIBRARY_PATH=/export/home/keremet/work/gsoc/2011_07_31/printer LD_PRELOAD=/export/home/keremet/work/gsoc/2011_07_31/liblinux/linux.so.1 /export/home/keremet/work/gsoc/2011_07_31/ld.so.1 /export/home/keremet/work/gsoc/2011_07_31/printer/bjfilterpixmaip1500 --imageres 600 --papersize a4 --grayscale --media plain --paperload asf --bbox 9,14,585,834 > /dev/printers/1
cd -
