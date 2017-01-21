#!/bin/sh
if [ -d /media/sageadmin/95B3-978B/Work/Dropbox/ResearchUMN/Unsorted/detect/* ]; then
	gnome-screensaver-command -l
    rm -rf /media/sageadmin/95B3-978B/Work/Dropbox/ResearchUMN/Unsorted/detect/*
fi
if [ -f /media/sageadmin/95B3-978B/Work/Dropbox/ResearchUMN/Unsorted/detect/* ]; then
	/home/sageadmin/Documents/passCompro.sh    
	gnome-screensaver-command -l
    rm -rf /media/sageadmin/95B3-978B/Work/Dropbox/ResearchUMN/Unsorted/detect/*
fi
