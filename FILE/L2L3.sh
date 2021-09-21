#! /bin/sh

echo `date`
echo "======start L2&L3======"
./callpctrl &
./l2app &
exit 0
