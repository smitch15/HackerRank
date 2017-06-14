#!/bin/python3

import sys

def convertTime(time):
    time24 = int(time[0:2])
    if (time24<12):
        time24 += 12;
        print(str(time24)+(time[2:8]))
    else:
        print(time[:8])

def main():
    time = input().strip()
    
    if (time[8:10] == "AM"):
    	if (time == "12:00:00AM"):
    		print("00:00:00")
    	else:
    	    print(time[0:8])
    
    if (time[8:10] == "PM"):
        convertTime(time)

main()
