#!/bin/sh

git clone https://github.com/Nefry-Community/Document.git
git clone https://github.com/Nefry-Community/NefryLibraryDocument.git


cp NefryLibraryDocument/*.md Document/docs/developNefryLibrary/
cp NefryLibraryDocument/pic/* Document/docs/developNefryLibrary/pic/
cp articles/*.pdf Document/docs/developNefryLibrary/pdf/

git remote set-url origin git@github.com:Nefry-Community/Document.git

git config --global user.email "wamiwami@live.jp"
git config --global user.name "wami"

git add --all
git commit -m "[auto] commit LibraryDocument"
git push origin master
