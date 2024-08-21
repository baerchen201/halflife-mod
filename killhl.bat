@echo off

start /wait "" "taskkill" "-f" "-im" "hl.exe"
start /wait "" "taskkill" "-f" "-im" "hlds.exe"

exit /b 0