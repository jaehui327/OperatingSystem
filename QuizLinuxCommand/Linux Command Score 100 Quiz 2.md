# Linux Command Score 100 Quiz 2 
#### (1번) 파일 x의 i-node 번호와 바이트 크기를 보는 명령 
~~ls -il x~~  
~~ls -sl x~~  
ls -il  

#### (2번) 파일 x를 파일 디렉터리 /y로 옮기는 명령
mv x /y  

#### (3번) 하위에 파일이 존재하는 디렉터리 x를 지우는 명령
~~rm -r x~~  
~~rmdir -p x~~  
~~rm -rf x~~  

#### (4번) 현재 워킹 디렉터리 x의 접근권한을 drwxr-xr-x 로 변경하는 명령
~~chmod 755 x~~  
~~chmod 751 x~~  
chmod 755 .  

#### (5번) 현재 워킹 디렉터리 x의 접근 권한을 보는 명령
~~umask~~  
~~umask x~~    
ls -ld .  

#### (6번) 현재 실행 중인, 제어 터미널이 없는 프로세스를 포함하는 모든 프로세스의 소유자 USER와 시작시간 START 정보를 보여주는 명령
ps aux  

#### (7번) 현재 실행 중인 프로세스 x를 종료시키는 명령
~~pkil x~~  
killall x  

#### (8번) PID가 1234인 프로세스를 (SIGTERM신호로부터 보호가 되어 있더라도) 확실하게 종료시키는 명령
kill -9 1234  

#### (9번) 화면에 hello world! 라는 한 줄의 문자열을 출력하는 명령
echo hello world!  

#### (10번) 텍스트 파일 x, y의 내용을 연결하여 하나의 파일 z에 저장하는 명령
cat x y > z  
