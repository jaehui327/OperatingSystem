# Linux Command Score 100 Quiz  
#### (1번) 현재 디렉터리의 디스크 사용 공간의 크기를 바이트 단위로 보여주는 명령은?
du -b
du -sb

#### (2번) 현재 디렉토리의 모든 파일을 다른 곳으로 통째로 옮기기 위하여 x라는 파일로 하나로 묶어주되 처리 과정을 자세히 보여주는 명령은? ($나 빈칸 없이 명령만 답하세요)
tar cvf x .

#### (3번) 현재 디렉터리 아래에 이름이 x인 파일을 찾아 ls 명령을 수행하는 명령은?  ($나 빈칸 없이 명령만 답하세요)
find . -name x -ls

#### (4번) 대상 파일 x를 읽어서 패턴 x를 검색하고 패턴 x를 포함하는 줄을 표준출력 하는 명령은?
grep x x

#### (5번) 호스트 cse.inu.ac.kr의 IP 주소를 알아내는 명령은?  ($나 빈칸 없이 명령만 답하세요)
nslookup cse.inu.ac.kr

#### (6번) date를 수행한 결과를 로그인한 사용자 이름과 같은 이름의 파일에 저장하는 명령은?  ($나 빈칸 없이 명령만 답하세요)
date > $LOGNAME

#### (7번) 사용자 x의 정보 특히 언제 어디서 로그인 했는지와 무슨 작업을 하고 있는지 정보를 보여주는 명령은?  ($나 빈칸 없이 명령만 답하세요)
w x

#### (8번) 쉘 명령 man의 온라인 매뉴얼 페이지를 출력하는 명령
man man

#### (9번) 자신이 사용 중인 Linux 호스트 컴퓨터의 IP 주소 및 하드웨어 주소(이터넷 주소)를 알아내는 명령은?  ($나 빈칸 없이 명령만 답하세요)
~~ifconfig -a~~
Ifconfig -a

#### (10번) Unix나 Linux 운영체제의 커널 버전을 확인하는 명령은?
uname -a
