@echo off 

:: Your Identity
git config --global user.name "wt"
git config --global user.email wt@example.com

:: Update
git pull

:: List all variables set in config file
:: git config --list

:: Show the working tree status
git status

:: Add & commit
git add .
:: set /p variable=The commit: 
:: git commit -m "%variable%"
git commit -m "Update"

:: Push
git push

:: Notify
echo Update successful!

timeout 5