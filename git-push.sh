#!/bin/bash

git add .

echo 'Enter the commit message:'

read commitMessage

git commit -m "$commitMessage"

git push

echo 'Thanks'

exit;