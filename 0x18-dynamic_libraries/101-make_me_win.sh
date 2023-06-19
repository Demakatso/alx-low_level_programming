#!/bin/bash
cp gm gm_tmp && echo "9 8 10 24 75 9" > input.txt && ./gm_tmp $(cat input.txt)

