#!/bin/sh

cd articles

for textfile in $( ls . | grep .md$ ); do
  md2review ${textfile} > ${textfile}.re
done
