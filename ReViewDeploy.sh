#!/bin/sh

git clone https://github.com/Nefry-Community/Document.git
git clone https://github.com/Nefry-Community/NefryLibraryDocument.git

cp NefryLibraryDocument/*.md Document/docs/developNefryLibrary/
cp NefryLibraryDocument/pic/* Document/docs/developNefryLibrary/pic/
cp -f articles/*.pdf Document/docs/developNefryLibrary/pdf/

echo "copy finish!"

cd Document

git remote set-url origin git@github.com:Nefry-Community/Document.git

git config --global user.email "wamiwami@live.jp"
git config --global user.name "wami"

git add --all
git commit -m "[auto] commit LibraryDocument"
git push origin master
