# <span style="color:black">Born2beroot</span>

## <span style="color:yellowgreen">사용되는 개념에 대한 간단한 정리</span>


#### <span style="color:orange">1. CentOs</span>

무료 오픈소스 리눅스 운영체제

서버를 운영하는데 사용된다.

RHEL (레드헷 엔터프라이즈 리눅스)를 무료로 사용할 수 있으며, 이를 그냥 서버로 사용할 수 있다.

서버용 기능들이 충실하다.

####  <span style="color:orange">2. lvm</span>

Logical Volumn Manager의 약자로, 로지컬 볼륨을 효율적이고 유연하게 관리하기 위한 커널의 한 부분이자 프로그램이다.

####  <span style="color:orange">3. 커널</span>

커널은 컴퓨터 운영 체제의 핵심이 되는 컴퓨터 프로그램으로, 시스템의 모든 것을 완전히 통제한다. 운영 체제의 다른 부분 및 응용 프로그램 수행에 필요한 여러 가지 서비스를 제공한다.

커널은 응용 소프트웨어와 하드웨어를 연결하고 있다.

커널의 역할로는 보안, 자원관리, 추상화가 있다.

####  <span style="color:orange">4. 하드웨어 추상화</span>

프로그래머가 프로그램을 장치 독립적인 프로그램으로 작성하도록 하고 하드웨어 호출을 무시함으로써 고성능의 응용 프로그램 작성을 허용하는 것이다.

####  <span style="color:orange">5. 서버</span>

서버는 클라이언트에게 네트워크를 통해 정보나 서비스를 제공하는 컴퓨터 시스템으로 컴퓨터 프로그램 또는 장치를 의미한다. 특히, 서버에서 동작하는 소프트웨어를 서버 소프트웨어라고 한다.

####  <span style="color:orange">6. 클라이언트</span>

컴퓨터 네트워크에서 클라이언트는 네트워크를 통하여 서버라는 다른 컴퓨터 시스템 상의 원격 서비스에 접속할 수 있는 응용 프로그램이나 서비스를 말한다.

구체적으로 말하자면 클라이언트-서버 구조에서 서버에서 그 서버가 제공하는 서비스를 요청하거나, 서비스 요청을 위해 필요 인자를 서버가 원하는 방식에 맞게 제공하며, 서버로부터 반환되는 응답에 사용자에게 적절한 방식으로 표현하는 기능을 가진 프로그램이나 시스템이다.

####  <span style="color:orange">7. SSH</span>

Secure Shell Protocol의 약자로, 네트워크 프로토콜 중 하나이다.

컴퓨터와 컴퓨터가 인터넷과 같은 Public Network를 통해 서로 통신을 할 때, 보안적으로 안전하게 통신을 하기 위해 사용하는 프로토콜이다.

사용의 예시로는 데이터 전송, 원격제어가 있다.

소스 코드를 원격 저장소인 깃헙에 푸쉬할 때 ssh를 활용해 파일을 전송한다.

aws의 인스턴스 서버에 접속하여 해당 머신에 명령을 내리기 위해서도 ssh를 통해 접속해야 한다.

####  <span style="color:orange">8. UFW</span>

Uncomplicated Firewall의 약자로, 우분투의 기본적인 방화벽을 뜻한다.

####  <span style="color:orange">9. 가상 머신</span>

가상 머신이란, 하나의 컴퓨터로 다른 운영체제를 실행하고자 할 때 소프트웨어로 하드웨어 기능을 시뮬레이션하여 실행하는 것이다.

####  <span style="color:orange">10. 보안 프레임워크</span>

Cent Os는 SELinux, Debian은 AppArmor를 채택하고 있으며, 보안 프레임 워크란 IT시스템의 파수꾼 역할을 담당하고 있는 보안 영역을 대상으로 응용시스템, 무선, 전자 상거래 보안 등을 비롯해 보안 솔루션, 보안의 원리를 다루는 데에 있어 프로그램 개발자가 따라야 하는 일종의 가이드 라인이라고 생각할 수 있다.

macbook m1에서 먼저 가상환경을 통해 경험해보려했으나

현재 VM은 m1에서 동작하지 않아서 해보지 못했다.

debian의 iso파일의 버전이 11이 넘어갈 경우, 제대로 실행이 되지 않는 것을 발견했다.

버전 10의 iso파일을 받은 후, goinfre의 경로로 설정하여 다운로드를 진행해야 제대로 설치가 된다.

참고한 링크 : https://tbonelee.tistory.com/m/16

https://www.tecmint.com/difference-between-apt-and-aptitude/

https://jjjaeu.tistory.com/33

https://m.blog.naver.com/dudwo567890/130158001734

https://www.tecmint.com/difference-between-apt-and-aptitude/

https://www.redhat.com/sysadmin/apparmor-selinux-isolation

https://www.educba.com/centos-vs-debian/

https://tbonelee.tistory.com/m/16

https://velog.io/@tmdgks2222/42seoul-born2beroot-cron-monitoring.sh

[https://zetawiki.com/wiki/크론탭_작업_5분마다_수행](https://zetawiki.com/wiki/%ED%81%AC%EB%A1%A0%ED%83%AD_%EC%9E%91%EC%97%85_5%EB%B6%84%EB%A7%88%EB%8B%A4_%EC%88%98%ED%96%89)

https://blog.naver.com/PostView.naver?blogId=digitalnomad00&logNo=222414374887&redirect=Dlog&widgetTypeCall=true&directAccess=false

---

### 1. **CentOS와 데비안의 주요 차이점**

둘의 차이점을 정리하자면 다음과 같다.

- 데비안은 일반적으로 최신 패키지가 더 많고 최신 버전으로 업그레이드하기 쉽다. 많은 사람들이 Red Hat Linux로 GNU/Linux를 시작했으며 데스크탑에서는 항상 CentOS와 Fedora를 사용해 왔다.
- CentOS는 레드햇이 공개한 RHEL을 가져와서 브랜드와 로고만 제거하고 배포한 배포본, 데비안은 커뮤니티에서 만들어진 배포판이라 개인용으로 사용하기에 적합하다.
- CentOS에 더 익숙 하고 [CentOS](https://www.educba.com/what-is-centos/)로 작업하는 데 더 익숙하거나 오랫동안 사용해 왔다면 Debian으로 마이그레이션할 실제 이유가 없다. CentOS와 Debian은 모두 웹 서버나 다른 서버에 설치할 GNU/Linux 배포판을 선택할 때 선택할 수 있는 최상의 옵션이다.
- Web Server를 설치할 때 명심해야 할 것이 있다. 이 서버를 리셀러 도구로 사용하려는 경우 cPanel이라는 도구를 설치하고 싶을 수 있으며, 이 경우 공식적으로 지원되는 CentOS를 사용하는 것이 좋다.

### 2. Apt와 Aptitude의 주요 차이점

둘의 차이점을 정리하자면 다음과 같다.

- Aptitude는 Apt의 상위 수준 패키지 관리자라고 생각하면 된다. Aptitude는 Apt보다 기능면에서 더 광범위하며 apt-get, apt-mark, apt-cache를 포함한 기타 변형을 통합한다.
- Apt는 모든 패키지 설치, 업그레이드, 시스템 업그레이드 등을 처리하기 위해 옵션과 명령을 적절히 사용해야한다면, Aptitude는 패키지를 자동 또는 수동으로 설치할 수 있도록 표시하고, 패키지를 업그레이드할 수 없도록 유지하는 등의 작업을 수행할 수 있다.
- Aptitude는 패키지를 검색하는데 사용할 수 있는 강력한 검색을 제공한다. Apt는 패키지를 검색하기 위해서 apt-get이 아닌 apt-cache가 필요한 것 처럼 Apt의 변형을 줘야 한다.

### 3. re와 AppArmor의 주요 차이점

둘의 차이점을 정리하자면 다음과 같다.

- SELinux는 CentOS에서 채택하고 있는 리눅스 보안 아키텍처이고, AppArmor는 데비안에서 채택하고 있는 리눅스 보안 아키텍처이다. 둘은 매우 비슷한 형태를 지니고 있지만, AppArmor가 SELinux에 비해 보안프로필이 사용자 친화적이고, 덜 복잡하며, 더 적은 수 의 작업을 제어한다.
- SELinux와 AppArmor 모두 주체 (프로세스 혹은 사용자)가 객체 (파일, 디렉터리 등)에 엑세스할 수 있도록 허용하는 규칙을 기반으로 이를 제어할 수 있도록 Type Enforcement 보안 모델을 지원한다. 그러나 AppArmor에는 MLS(Multi-Level Security)와 MCS(Multi-Category Security)가 없다. 이는 AppArmor에서는 컨테이너들 사이의 seperation을 유지할 수 없다는 것을 의미한다.
- SELinux는 AppArmor보다 시스템에서 더 많은 작업을 제어하고 기본적으로 컨테이너를 분리하는 더 복잡한 기술이기 때문에, 제어와 환경 면에서 SELinux가 더 광범위하게 적용될 수 있다.

### 가상 머신이란?

- 물리적 하드웨어 시스템에 구축되어 자체 CPU, 메모리, 네트워크 인터페이스 및 스토리지를 갖추고 가상 컴퓨터 시스템으로 작동하는 가상 환경이다.
- 사용해보고자하는 운영체제가 설치되어있지 않아도 이를 테스트할 수 있고, 호스트환경에서 무언가를 수행하기에 위험한 특정 작업을 시도해보기 위해 필요하다.
- 가상머신환경 (ex) Virtual Box)에 iso 디스크를 마운트시키고, 설치환경에서의 설정을 통해 실행시킬 수 있다.

### SSH란?

- Secure Shell Protocol의 약자로, 네트워크 프로토콜 중 하나이다. 컴퓨터와 컴퓨터가 인터넷과 같은 Public Network를 통해 서로 통신을 할 때, 보안적으로 안전하게 통신을 하기 위해 사용하는 프로토콜이다.
- 즉, 다른 보안적이지 않은 네트워크에서 안전한 방법으로 현재의 보안적인 네트워크에 접속할 수 있는 것이다.
- 사용의 예시로는 데이터 전송, 원격제어가 있다.
- 소스 코드를 원격 저장소인 깃헙에 푸쉬할 때 ssh를 활용해 파일을 전송한다.
- aws의 인스턴스 서버에 접속하여 해당 머신에 명령을 내리기 위해서도 ssh를 통해 접속해야 한다.

### Create new user

- sudo adduser username
- sudo chage -l username
- sudo adduser username sudo
- sudo adduser username user42
- or → sudo groupadd -aG user42,sudo username

1) lsblk <- Check partitions

2) sudo aa-status <- AppArmor status

3) getent group sudo <- sudo group users

4) getent group user42 <- user42 group users

5) sudo service ssh status <- ssh status, yep

6) sudo ufw status <- ufw status

7) ssh username@ipadress -p 4242 <- connect to VM from your host (physical) machine via SSH

8) nano /etc/sudoers.d/<filename> <- yes, sudo config file. You can $ ls /etc/sudoers.d first

9) nano /etc/login.defs <- password expire policy

10) nano /etc/pam.d/common-password <- password policy

11) sudo crontab -l <- cron schedule

### LVM이란?

- 여러개의 디스크 공간을 합쳐서 하나인양 사용하기 위해, 사용하기 애매한 공간의 디스크 파티션들을 활용하기 위해, 기존에 사용중인 디스크의 공간을 확장할 수 있게 사용한다.
- 리눅스의 /dev/sda는 윈도우로 치면 C드라이브에 해당하는데, 이를 /dev/sda1 과 /dev/sda2라는 두 개의 파티션으로 나눌 수 있고, 두 개의 파티션은 각각 자신의 디스크에 할당된 메모리를 사용하게 된다.
- 그런데 각각의 파티션을 사용하던 도중 하나의 파티션에서 저장공간이 부족해질 때, 부족한 저장공간을 확보하기 위해서 이제 LVM이 등장한 것.
- 실제로 서버를 운영할 때 자주쓰이는 리눅스의 경우, 서버 인기가 많아져서 확장을 해야한다거나 할 때는 엄청나게 큰 용량의 디스크 내용들을 백업하고 교체하는건 매우 힘든일이다.
- 따라서 이런 경우에 LVM을 사용하게 된다.

### sudo logs 확인 방법

- [$cd /var/log/sudo/00/00 && ls]

### Reboot Cron

- systemctl disable cron
- systemctl enable cron

born2beroot라는 과제의 큰 틀은 “나의 첫 번째 서버를 설정할 수 있냐” 이다.

따라서 이를 과제에 맞게 구현하기 위해 크게 5가지의 역량을 요구하고 있다.

5가지의 역량은 다음과 같다.

1. 과제에서 제시한 대로 cent os나 데비안을 virtualbox를 통해 실행시킬 수 있는가.
2. ssh와 ufw등 과제에서 제시한대로 나의 서버에 설정을 마칠 수 있는가.
3. 강력한 패스워드 정책을 설정할 수 있는가.
4. sudo 그룹에 대해 강력한 구성을 설정할 수 있는가.
5. 마지막으로 주어진 조건에 따른 monitoring.sh이라는 쉘스크립트를 작성할 수 있는가.

이를 수행하기 위해 세세한 항목들을 중심으로 다섯 가지 역량을 진행해보려 한다.

데비안 10.10버전 링크

http://cdimage.debian.org/cdimage/archive/10.10.0/amd64/iso-cd/

- 평가하기전에 apt-get install sysstat을 통해 sysstat패키지를 설치하고 시작.
- 평가하기전에 apt install sudo하는게 좋음

---

### **첫 번째, 과제에서 제시한 대로 cent os나 데비안을 virtualbox를 통해 실행시킬 수 있는가.**

1. virtualbox는 cluster mac에서 앱스토어를 통해 설치할 수 없으므로 managed software center를 통해 설치한다.
2. cent os같은 경우 용량이 너무 크고, 서버를 처음 다루기에는 어려운 이슈가 있으므로 본 과제는 데비안으로 진행한다.
3. 과제에서는 데비안의 stable 최신버전을 이용하기를 요구하지만 현재 11버전의 경우 virtualbox와의 호환이 제대로 이루어지지 않으므로, stable 10버전을 이용하여 설치를 진행한다.
4. virtualbox의 new를 통해 데비안을 실행시키기 전에 주의해야할 점은 machine folder의 저장경로를 goinfre로 해야하는 것이다. 그렇지 않을 경우, 저장공간에 대한 문제가 일어날 수 있다.
5. 가상머신에서 사용할 크기는 적당히 추천 해주는 대로 설정하고, 가상디스크의 경우 virtualbox 전용 가상머신 이미지파일인 vdi를 선택한다. vdi는 다른 파일 없이도 현재 상태의 가상머신을 살릴 수 있다는 특징이 있다.
6. 저장 공간은 동적할당으로, 한계치는 8.0gb로 설정한다.
7. 디스크 이미지의 경우 debian stable 10버전 .iso를 설정해준다.
8. 설치창에서 제시하는 국가와 언어의 경우는 국가는 한국, 언어는 영어로 설정한다. (한글의 경우 깨짐 이슈가 있다.)
9. hostname은 과제에서 제시한대로 (intra id)42로 설정한다.
10. root password를 설정한다.
11. 가상 머신으로 작업할 때 사용할 계정,  id, password를 과제에서 제시한대로(intra id) 설정한다.
12. 과제에서 제시한대로 암호화된(encrypted) LVM(Logical Volumn Management)를 고른다.
13. 파치션을 분리하기 위해 seperate home partiton을 고른다.
14. 기존 드라이브를 LVM으로 분할 및 덮어쓰기, 그리고 사용하기 위해 yes를 고른다.
15. 암호화된 LVM에 대한 비밀번호를 설정한다.
16. LVM 분할 볼륨을 추천해준  8.1gb로 설정하고, disk를 덮어 쓰기 위해 yes를 고른다.
17. 이 후, scan no disk를 선택한뒤, 국가와 설정등을 설정하고 update, upgrade 및 프로그램 추가를 위한 미러사이트를 추천해준 대로 설정한다.
18. iso파일에는 핵심부분만 설치되어 있기 때문에 software selection의 경우 체크되어있는 부분을 추가로 설치한다. (ssh,standard system utilities)
19. grub(Grand Unified Bootloader)를 master boot record로 설정하는 것에 대해서는 서브젝트에 명시된것이 없기 때문에 no를 선택하여 설정하지 않는다.
20. 과제에 명시된 부트 경로 지정을 위해 manually로 설정하고, 이에 대해 과제에서 제시한대로 경로를 /dev/sda1로 설정해준다. (mountpoint가 sda1에 있기 때문에)
21. continue를 눌러 설치를 마무리한다.

---

### **두 번째, ssh와 ufw등 과제에서 제시한대로 나의 서버에 설정을 마칠 수 있는가.**

### AppArmor 가동 시키기

1. 먼저 su - 명령어를 통해 패스워드를 입력한 후 root계정으로 이동한다.
2. apparmor가 설치되어 있는지 확인하기 위해 dpkg -l apparmor를 입력하여 여부를 확인한다.
3. apparmor가 설치되어 있지 않다면 apt install apparmor를 통해 설치한다.
4. apparmor utils도 설치하기 위해 apt install apparmor-utils를 통해 설치한다.
5. aa-enabled를 통해 apparmor의 활성화 여부를 파악할 수 있다.
6.  ps auxZ | grep -v ‘^unconfined’ 명령어를 통해 현재 앱아머의 의해 제한된 실행 파일을 확인할 수 있다.

- **AppArmor란?**

- 시스템 관리자가 응용 프로그램의 역량, 권한을 제한할 수 있도록 하는 리눅스 커널 보안 모듈이다. 프로그램의 프로필을 통하여 네트워크 엑세스, raw 소켓 엑세스, 파일의 읽기, 쓰기 실행 권한 등 해당 프로그램이 취할 수 있는 작업을 제한하고 관리한다.

### ssh 설정하기

1. apt search openssh-server 명령어를 통해 openssh가 설치되어있는지 확인한다.
2. 설치되어 있지 않다면, apt install openssh-server를 통해 설치한다.
3. systemctl status ssh 명령어를 통해 openssh  실행 여부와 사용 포트를 확인한다. (active 및  port 22)
4. sudo ufw allow 4242 를 통해 4242포트를 허용한다. (ufw 설치 후)
5. sudo vim /etc/ssh/sshd_config 명령어를 통해 ssh설정을 변경한다. (이전에 sudo apt install vim 설치)
6. 과제에서 제시한대로 Port 22라고 되어있는 부분을 주석처리를 삭제하고  Port 4242로 변경해준다.
7. 과제에서 제시한대로 PertminRootLogin 부분을 no로 바꾼뒤 주석처리를 삭제한다. → 외부에서 root로 로그인하는 것을 방지한다.
8. sudo systemctl restart ssh 명령어를 통해 ssh를 재시작하며, 바꾼 설정을 적용한다.

- **SSH란?**

- SSH는 Secure Shell의 줄임말로, 원격 호스트에 접속하기 위해 사용되는 보안 프로토콜이다. ssh는 키를 통해 사용자(클라이언트)와 서버(호스트)를 상대로 연결 시켜준다. 이 때 사용되는 것이 개인 키와 공개 키이다. 대표적으로 깃 푸시와 같은 데이터 전송과 aws 클라우드 서비스와 같은 원격제어가 있다.

### ufw 설정하기

1. sudo apt install ufw 명령어로 ufw를 설치한다.
2. sudo ufw status verbose 명령어로 ufw 상태를 확인한다.
3. sudo ufw enable 명령어로 부팅 시 ufw가 활성화 되도록 설정한다.
4. sudo ufw default deny 명령어로 기본 incoming deny가 되게 설정한다.
5. sudo ufw allow 4242 명령어를 통해 ssh 연결을 허용한다.
6. ufw 정책을 삭제하기 위해 sudo ufw status numberd으로 Rule의 상태를 조회한다.
7. sudo ufw delete RULEINUM을 통해 RULEINIUM에 해당하는 포트에 대한 Rule을 삭제할 수 있다.

→ sudo ufw - -help를 통해 ufw command를 확인할 수 있다.

- **UFW란?**



- UFW란 Uncomplicated Firewall의 줄임말로, 데비안 계열 및 다양한 리눅스 환경에서 작동되는 사용하기 쉬운 방화벽 관리 프로그램이다. 간단한 명령 및 명력수가 적은 CLI를 통해 사용하며, 프로그램 구성에는 iptabled가 있다.

### 고정 ip 확보

1. ss -tunlp 명령어를 통해 4242포트만 열어지는지 혹은 dhclient 항목이 잡히는 지 확인한다.
2. dhcp, ip를 자동할당 및 반환하는 동적 IP를 받고 있다는 뜻이기에 이를 제거하고 고정 IP를 설정한다.
3. 가상환경의 ip를 확인하기 위해 ip addr명령어를 사용한다.
4. 가상환경의 gateway주소를 확인하기 위해 ip route 명령어를 사용한다. (default via 다음 부분이 gateway주소)
5. vim /etc/network/interfaces에 현재 IP설정이 있는데, # The primary~ 밑 부분에 기존 설정이 dhcp를 이용한 동적 할당임을 확인한다.
6. 해당 부분을 주석처리해주고 위에서 확인한 ip와 gateway 주소로 고정한다.

#The primary network interface

#allow-hotplug enp0s3

#iface enp0s3 inet dhcp

auto enp0s3

iface enp0s3 inet static

address 10.0.2.15

netmask 255.255.255.0

gateway 10.0.2.2

1. sudo ifdown enp0s3, sudo ifup enp0s3, sudo reboot를 해준 뒤 ss -tunlp 명령을 통해 dhclient가 사라져 있는 것을 확인할 수 있다.

ifdown : 이더넷 카드 장치를 종료 한다. 일반적으로 새로운 네트워크 설정을 적용하기 위에 ifdown을 사용하여 디바이스를 종료시키고 ifup명령어를 통해 새로운 설정을 적용한다.

ifup : interface 파일에 저장 되어 있는 네트워크 정보로 이더넷 카드에 적용시켜 디바이스를 구동 시킨다.

---

### **세 번째, 강력한 패스워드 정책을 설정할 수 있는가.**

1. chage -l jaewopar 를 통해 현재 사용자의 암호를 확인한다.
2. chage 명령어를 통해 과제에 제시된 것과 같게 패스워드 정책을 설정한다.

| Last password change | 옵션 -d | 마지막 패스워드 변경일 |
| --- | --- | --- |
| Password expires |  | 암호 만료일 |
| Password inactive | 옵션 -I(대문자 i) | 비활성화 유예기간 |
| Account Expires | 옵션 -E | 계정 만료일 |
| Minimum Number ... | 옵션 -m  | 패스워드 변경 후 최소 의무 사용일 |
| Maximum Number ... | 옵션 -M | 패스워드 변경 후 변경 없이 사용가능한 최대 일 수 |
| Number of days of warning ... | 옵션 -W | 패스워드 만료 전 경고메시지를 보낼 일 수 |
1. sudo chage -M 30 -m 2 -W 7 jaewopar를 통해 과제에서 제시된 3개의 조건을 충족시킨다.
2. chage 명령어 같은 경우는 해당 계정의 패스워드 정책만 바꿀 수 있기 때문에, 후에 생성될 계정들에 대해서도 같은 패스워드 정책을 수행하기 위한 수단을 만들어야 한다.
3. 따라서 sudo vim /etc/login.didfs파일을 들어가 PASSWORD 정책 관련된 부분을 수정해준다
4. 해당 수정은 PASS_MAX_DAYS 30, PASS_MIN_DAYS 2, PASS_WARN_AGE 7로 설정해준다.
5. 다른 조건들을 충족시키기 위해 sudo vim /etc/pam.d/common-password 명령어를 통해 해당 파일에 들어간다.
6. 먼저 해당 파일을 수정하기 전에, 패스워드 정책 설정을 위해 sudo apt install libpam-cracklib 명령어를 통해 해당하는 모듈을 설치해준다.
    1. 그러면 password requisie pam_crack~ 줄이 추가된 것을 확인할 수 있다.
7. 설치된 모듈에 적용될 수 있는 옵션은 다음과 같고, 밑에 나와있는 부분을 통해 과제에 제시된 패스워드 정책을 수행할 수 있다.

**retry=N**                      암호 입력 재시도 가능 횟수

**difok=N**                      이전 암호와의 비교. 최소 N개 이상의 문자가 달라야 함

**minlen=N**                   암호의 최소 길이

**dcredit=N                  (N < 0)** 암호가 포함해야 하는 숫자의 최소 개수                                   **(N >= 0)** 숫자에 주어지는 credit 값

**ucredit=N**                  알파벳 대문자

**lcredit=N**                   알파벳 소문자

**ocredit=N**                  숫자 / 알파벳을 제외한 기타 문자

**minclass=N**               암호에 있어야 하는 최소 문자 종류. (숫자, 대문자, 소문자, 기타 문자) 의 네 종류 중 N 가지가 있어야 함

**maxrepeat=N**           연속된 같은 문자를 N개까지만 허용

**maxsequence=N**      단순한 나열의 문자가 N개 이상 있는 암호 거부. N=5 인 경우 'abcde', N=4 인 경우 '9876' 등을 거부함

**maxclassrepeat=N**   같은 종류의 문자를 N개까지만 허용. N=4 인 경우 abcD는 가능하나 abcd 를 거부함

**reject_username**       암호가 계정의 이름을 포함하는지 검사.  root의 경우, root123 / Toor 등을 거부함

**enforce_for_root**       root 계정에도 상기의 옵션들은 적용.

하지만, root에게는 이전 암호를 묻지 않으므로 difok 은 적용되지 않음

→ **retry=3 minlen=10 difok=7 dcredit=-1 ucredit=-1 maxrepeat=3 reject_username enforce_for_root** (해당 내용을 pam_cracklib.so 뒤에 붙여주게 되면 암호 입력 재시도 3회, 최소 10글자의 길이, 숫자와 대문자를 하나씩 포함하고 이전 패스워드와 7글자 이상이 다르며 계정명을 포함하지 않고 같은 글자의 반복을 3자까지만 허용하는 패스워드 정책을 시행할 수 있다.)

1. 현재의 비밀번호가 조건에 부합하지 않을 때, 서브젝트 조건에 맞추어 새로 적용해야 한다.
2. 계정의 비밀번호는 passwd -e jaewopar로 바꿀 수 있다.
3. 명령어를 입력하고 logout을 한 뒤, 다시 로그인할 때 비밀번호를 변경할 수 있다.

---

### **네 번째, sudo 그룹에 대해 강력한 구성을 설정할 수 있는가.**

### sudo 적용

1. 먼저 su - 명령어를 통해 패스워드를 입력한 후 root계정으로 이동한다.
2. sudo가 설치되어 있는지 확인하기 위해 dpkg -l sudo를 입력하여 여부를 확인한다.
3. 설치되어 있지 않을 경우 apt install sudo 명령어를 통해 설치한다.
4. mkdir /var/log/sudo/ 명령어를 이용하여 저장할 경로 디렉토리를 생성한다.
5. visudo 명령어를 통해 sudoer파일에 접근한다. (sudoer파일은 일반 vi 편집기로 접근하면 제약이 발생한다 따라서 /etc/sudoers 파일을 직접 편집하다가 실수가 발생하면 sudo를 사용할 수 없기에  visudo를 통해 편집한다.)
6. secure_path에 과제에서 제시한 대로 /snap/bin을 추가한다. ⇒ secure_path=”/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin”
7. Defaults와 주석 사이 아래 옵션들을 추가적으로 설정한다.

| Defaults | authfail_message | = | “Authentication failed” | sudo인증 실패 시 출력 |
| --- | --- | --- | --- | --- |
| Defaults | badpass_message | = | “Wrong password” | sudo인증 비밀번호 틀릴 시 출력 |
| Defaults | log_input |  |  | sudo명령어 실행 시 입력된 명령어 log로 저장 |
| Defaults | log_output |  |  | sudo명령어 실행 시 출력 결과를 log로 저장 |
| Defaults | requiretty |  |  | sudo명령어 실행 시 tty강제 (보안상의 이유로 TTY모드를 사용하기 위해) |
| Defaults | iolog_dir | = | /var/log/sudo/ | sudo log저장 디렉토리 설정 |
| Defaults | passwd_tries | = | 3 | sudo패스워드 실행 횟수를 지정 default가 3 |
1. ctrl + x를 누르고 y를 눌러 저장한다. 만약 .tmp파일 등의 이름으로 저장관련하여 물어본다면, .tmp를 지우고 sudoers로 저장한다.
2. /var/log/sudo/00/00에서 log를 확인할 수 있다.

### **그룹 설정**

리눅스 명령어 id는 현재 사용자의 실제 id와 유효 사용자 id, 그룹 id를 출력한다.

1. 과제에서 제시한대로 user42그룹을 추가하기 위해 groupadd user42 명령어를 입력한다.
2. sudo와 user42 그룹에 유저를 추가하기 위해 usermod -aG sudo,user42 jaewopar  명령어를 통해 해당 그룹에 유저를 추가한다. (-a == append 그룹에 추가하는 기능 ,  -G== groups 지정한 그룹들에 유저를 추가하는 기능)
3. usermod -g user42 jaewopar 명령어를 통해 user42 그룹이 primary group이 되도록 한다. (-g == group ,G옵션과 달리 그룹 하나만 있을 때 사용하는 옵션)

→ id jaewopar 를 통해 확인

1. sudo deluser 사용자명 그룹명 을 통해 그룹에서 사용자를 제거할 수 있다.
2. sudo userdel -r  사용자명 을 통해 사용자를 제거할 수 있다.

hos

- **tty란? teletypewriter, 즉, 표준 입력에 연결된 터미널의 파일 이름을 인쇄하는 유닉스 명령이다.**

- 컴퓨터를 조작할 때 사용하는 입출력 장치를 콘솔이라고 하고 명령조작에 사용하는 애플리케이션이나 OS자체를 콘솔 또는 콘솔애플리케이션이라고 하는데 보통 많은 사람들이 콘솔이라고 부른다. 또한 우리가 많이 사용하는 cmd도 콘솔이고 사용하는 터미널도 콘솔이다.
- tty도 콘솔의 한 종류로 Ctrl-Alt-F1 ~ F6 키조합으로 사용할수있는 OS 에서 제공하는 가상콘솔 이다. 실제 물리적인 장치가 연결된것이 아니기 때문에 커널에서 터미널을 emulation 한다. Line discipline, TTY driver 의 기능은 위와같고 마찬가지로 백그라운드 getty 프로세스에의해 login prompt 가 제공됩니다. /dev/tty[번호] 파일이 사용된다. TTY화면간 이동은 ALT+F1~F6이며 GUI환경 복귀는 ALT+F7이다.

- **sudoer란?**

- sudo 명령은 해당 명령을 잠시 다른 계정(주로 root)의 권한으로 실행하고자 할 때, 계정 전환 등의 절차 없이 유용하게 사용할 수 있는 명령이다. 다른 계정의 권한을 빌릴 수 있다는 말은 그 계정으로 할 수 있는 모든 일을 할 수 있다는 것을 의미하므로 사용시 유의해야 한다.

  보안상 상당히 위해가 될 수 있는 명령이기 때문에 리눅스 시스템에서는 모든 계정에게 sudo 명령을 사용할 수있는 권한을 부여하지 않고, sudoers라는 설정 파일을 통해 이 명령을 사용할 수 있는 계정의 범위를 한정한다.

- **secure_path란?**

- sudo명령 실행 시 현재 계정의 쉘이 아닌 새로운 쉘을 생성하고 그 안에서 명령을 실행하는데, 이 때 명령을 찾을 경로를 나열한 환경변수인 PATH값이 secure_path이다. 이는 트로이목마 해킹 공격에 대한 일차적인 방어 기능을 제공한다.

---

### **다섯 번째, 마지막으로 주어진 조건에 따른 monitoring.sh이라는 쉘스크립트를 작성할 수 있는가.**

- **cron이란?**

- 특정한 시간마다 어떤 작업을 자동으로 수행하게 하는 명령어(작업 예약 스케쥴러)

1. 시간단위를 설정하는 방법은 다음과 같다. cron작업은 crontab 이라는 파일에서 설정한다. (/etc/crontab) or crontab -e 에서 설정한다.

```
* * * * * command
```

1. 애스터마스크가 5개 있는데, 가장 왼쪽부터 분, 시간, 날짜(1~31), 월(1~12), 요일(0~6)이다. 필요한 항목에

    - (그 사이의 모든 값)

   `,`(지정 값)

   `/` (특정 주기로 나누기)

   등의 문자를 사용하여 주기를 정할 수 있다.

2. 프로젝트에서는 10분마다 한번씩 monitoring.sh를 실행해야한다. 따라서 모든 터미널로 메시지를 보내는 `wall`명령과 함께 다음 처럼 작성해주면 된다.

```
*/10 * * * * root bash /home/jaewopar/Mypath/monitoring.sh | wall
```

1. 또, 30초 단위로도 설정해야하는데 sleep을 사용하면 된다.

```
*/1 * * * * bash Mypath/monitoring.sh | wall # 이 명령이 매 1분마다 실행되니까
*/1 * * * * sleep 30; bash Mypath/monitoring.sh | wall # 이 명령은 매 1분때 30초를 기다리고 실행되므로....
```

### #Signature.txt (sha1sum)

(리눅스에서는 sha1sum , 맥(유닉스)에서는 shasum이다.)

소프트웨어 패키지 혹은 CD / DVD 파일을 공유할때, `shasum` 파일을 함께 배포되는 경우가 많다. shasum 파일은 원본 파일과 정확히 동일한 파일인지 확인할때 체크되는 파일이다. 체크섬(checksum)정보가 포함되어있다. (160bit)

- 체크섬(checksum) : 중복 검사의 한 형태로, 공간이나 시간속에서 송신된 자료의 무결성을 보호하는 단순한 방법이다.
- **즉, Born2beroot 프로젝트를 제출할때의 시점의 가상머신과, 동료평가를 받을때의 가상머신이 정확히 동일한 파일인지 확인하는 방법으로 shasum이 사용되며, 이를 signature.txt에 담아 제출하게된다.**

- **signature.txt 만드는 법**

- .vdi가 있는 디렉토리에서 shasum [].vdi 후 나온 값을 복사한다.

echo -ne

→ monitoring.sh

| #!/bin/bash
printf "#Architecture: "
uname -a
printf "#CPU physical : "
nproc --all
printf "#vCPU : "
cat /proc/cpuinfo | grep processor | wc -l
printf "#Memory Usage: "
free -m | awk 'NR==2{printf "%s/%sMB (%.2f%%)\n", $3,$2,$3*100/$2}'
printf "#Disk Usage: "
df -h | awk '$NF=="/"{printf "%d/%dGb (%s)\n", $3,$2,$5}'
printf "#CPU load: "
mpstat | grep all | awk '{printf "%.1f%%\n", 100-$13}'
printf "#Last boot: "
who -b | sed 's/^ *system boot //g'
printf "#LVM use: "
if [ "$(lsblk | grep lvm | wc -l)" -gt 0 ] ; then printf "yes\n" ; else printf "no\n" ; fi
printf "#Connections TCP : "
cat /proc/net/tcp | wc -l | awk '{print$1-1}' | tr -d '\n'
printf " ESTABLISHED\n"
printf "#User log: "
who | wc -l
printf "#Network: IP "
ip route list | grep link | awk '{print $9}'| tr -d '\n'
printf " ("
ip link show | grep link/ether | awk '{print $2}' | tr -d '\n'
printf " )\n"
printf "#Sudo : "
grep 'sudo:' /var/log/auth.log | grep 'COMMAND=' | wc -l | tr -d '\n'
printf " cmd\n"
exit 0 |
| --- |

```
# bash의 if문if [조건절]
then
    실행절
fi
```

```
$ awk '{printf $1}' awkfile# 1번 Field
$ awk 'NR>=2' awkfile# 2,3,4.... Record
```

→ **awk 명령어** : 파일의 특정 필드(col), 레코드(row) 출력. 입력으로 지정된 파일로부터 데이터를 분류한 다음, 분류된 텍스트 데이터를 바탕으로 패턴 매칭 여부를 검사하거나 데이터 조작 및 연산 등의 액션을 수행하고, 그 결과를 출력하는 기능을 수행한다.

- NR = 출력 순번
- NF = 현재 줄의 필드 수
- $NUMBER = 필드의 넘버

- **uname → 시스템 정보 출력 (운영체제 및 아키텍처)**
- -a : p와 i 옵션을 제외한 모든 정보 출력
- -s : 커널 이름 출력
- -n : 네트워크 의 호스트
- -r : 커널의 릴리즈 정보
- -v : 커널의 버전 출력
- -m : 시스템의 하드웨어 타입 출력(아키텍처)
- -p : 프로세스 종류 출력
- -o : 운영체제 이름 출력
- -i : 하드웨어 플랫폼 정보 출력
- uname -a 옵션을 통해 p와 i를 제외한 모든 정보를 출력한다.

- **nproc → the number of physical processors 명령어 (CPU프로세서)**
- nproc —all 을 통해 설치된 프로세서의 갯수 출력

- **vCPU → 가상 프로세서**
- cat /proc/cpuinfo | grep processor를 통해 가상 프로세서를 추출하고, wc -l를 통해 갯수를 구한다.

- **Memory Usage → the available RAM on my server and its utilization rate as a percentage**
- free 명령어를 통해 메모리 사용량을 확인할 수 있다.
- -m 옵션을 통해 메가바이트 형식으로 정보를 받아올 수 있다.
- awk 명령어를 통해 형식을 맞춰 작성한다.

- **Disk Usage → the available memory on my server and its utilization rate as a percentage**
- df 명령어를 통해 파일 시스템 디스크 공간을 확인할 수 있다.
- -h옵션을 통해 기가 바이트, 메가바이트 크기에 따른 형식으로 지정 용량을 블럭단위로 정해 용량을 출력한다.
- awk 명령어를 통해 형식을 맞춰 작성한다. (NF는 the number of fields로 )

- **CPU load → the utilization rate of my processors as a percentage**
- apt-get install sysstat을 통해 sysstat패키지를 설치한다.
- mpstat을 통해 CPU와 코어 별로 사용율을 모니터링할 수 있다.
- grep all 을 통해 모든 CPU 사용량을 추출한다.
- CPU의 사용량은 13번째 필드에 있는 사용량 (%idle (유휴 cpu 사용량))을 100에서 빼주면 구할 수 있다.
- 이에 맞춰 awk 명령어 형식을 맞춰 작성한다.

- **Last boot**
- 명령어 who는 호스트에 로그인한 사용자의 정보를 출력하는 명령어다.
- -b 옵션은 마지막 시스템 부팅 시간을 출력한다.
- sed 명령어의 정규표현식을 이용해 해당 시간을 출력한다. (^는 시작을 의미)

- **LVM use → LVM이 작동중인지 아닌지를 판별한다.**
- if 명령어를 통해 주어진 조건에 맞게 설정한다.
- -gt 옵션은 값 1 > 값 2 일 경우를 뜻하는데, 이에 조건을 lsblk | grep lvm | wc -l를 통해 lvm이 추출된다면 true를, 추출 되지 않는다면 false를 의미한다.

- **Connections TCP → 연결된 tcp의 수를 출력한다.**
- cat /proc/net/tcp를 통해 tcp를 추출한다.
- wc -l을 통해 갯수를 구한다
- awk 정규표현식을 통해 첫번째 필드에서 -1을 한 값을 출력한다.
- tr -d ‘\n’를 통해 줄바꿈을 무시한다.

- **User log**
- who를 통해 호스트에 로그인한 사용자의 정보를 출력하고, 갯수를 센다.

- **Network IP → ip를 추출한다.**
- IPv4는 ip route list에서 grep link를  통해 ip를 추출하고, 9번째 필드를 출력하면 된다.
- MAC 주소는 ip link show에서 link/ether 를 추출하여 mac주소를 추출하고 그중 2번째 필드를 추출하면 된다.

- **Sudo → The number of commands executed with the sudo program**
- grep 'sudo:' /var/log/auth.log | grep 'COMMAND=' | wc -l | tr -d '\n'를 통해 추출할 수 있다.

grep : 특정 문자열이 들어간것 찾아서 출력

tr : 문자 변환 / 삭제

wc : 라인 세기

printf : 줄바꿈을 안해주고 출력.

- 사용자 추가 : sudo adduser user01
- 현재 user 한번에 보는 명령어 : grep /bin/bash /etc/passwd | cut -f1 -d:
- 사용자 비밀번호 변경 : sudo passwd 사용자명
- 호스트네임 체크 : hostnamectl
- 호스트네임 변경 : sudo hostnamectl set-hostname [hostname]
- cron : 작업에약스케줄러

- **LVM : 물리적 매체가 있고 이를 PV(Physical Volume)로 나눈다. 이들을 적당히 모아서 VG(Volume Group)로 구성. 그 후 각 VG를 LV(Logical Volume)으로 나누어서 사용.**
-

### Hostname

- `hostnamectl` 명령어를 통해 hostname을 확인할 수 있다.
- `sudo hostnamectl set-hostname <변경할 hostname>` 명령어를 통해 호스트명을 변경할 수 있다.

### 로컬과 가상환경 간 ssh연결

- client(클러스터의 맥) 측에서 아래의 명령어를 입력한다.

```
ssh <계정 이름>@<서버주소> -p <포트번호>
#ssh jaewopar@192.168.0.1 -p 4242

```

- 클러스터 환경이라면, 연결이 잘 되지 않을 것이다.
- Host OS인 맥의 IP로 접속하면 가상환경이 아닌 자기 자신으로 연결하는 것이 되어버린다.
- 포트 포워딩을 통해 연결할 수 있다.
- `ifconfig` 명령어를 통해 자신의 로컬 IP주소를 확인한다.
- `hostname -I (i 대문자)`를 통해 가상환경의 IP주소를 확인한다.
- VirtualBox에서 설정을 눌러 아래와 같은 창을 연다.

!https://s3-us-west-2.amazonaws.com/secure.notion-static.com/ec1dc318-57d0-4c6c-9516-0860a3f086b2/Screen_Shot_2021-09-26_at_5.49.15_PM.png

- 상단의 네비게이션에서 Network ⇒ Advanced ⇒ Port Forwarding 클릭

!https://s3-us-west-2.amazonaws.com/secure.notion-static.com/ef358c23-6337-4147-b744-c9b313499274/Screen_Shot_2021-09-26_at_5.49.26_PM.png

- 이름과 호스트와 게스트의 IP, Port를 입력한다.
    - HostIP는 로컬(클러스터 맥)의 IP, Guest IP는 가상머신의 IP를 입력한다.
    - Guest Port는 아까 열었던 4242로 설정한다.
    - Host Port의 경우 아무거나 입력하면 된다.
        - 단 다른 프로세스가 사용 중일 수 있으므로, `lsof -P -i :<원하는 번호>`로 포트번호 확인할 것.

!https://s3-us-west-2.amazonaws.com/secure.notion-static.com/3194dc04-0003-4456-8e96-8d42fb7a7cdc/Screen_Shot_2021-09-26_at_5.53.41_PM.png

로그인 하는법 ssh [jaewopar@10.16.5.1](mailto:jaewopar@10.16.5.1) -p 2424

- **평가 유의사항**

—> goinfre폴더에 있는 b2r_test.vdi 파일을 shasum b2r_test.vdi를 통해 해시값 파일 하나를 받는다. 그리고 이를 signature.txt에 저장한 후, 제출한다.

- 평가 후, shasum 명령어를 사용하면 값이 바뀌기 때문에, signature.txt를 만들기 직전에 버츄얼 박스에서 스냅샷을 찍어 놓은 후, 다음 평가 때 스냅샷으로 돌아가서 다시 shashum 명령어를 사용하면 signature.txt와 똑같은 값을 출력할 수 있다.
- Git 저장소의 루트 디렉토리에 있는 signature.txt 파일만 제출하면 되며, 가상 머신의 서명을 붙여넣어야 함.

받는 방법은 기본 설치 폴더를 연 후,

- Windows: %HOMEDRIVE%%HOMEPATH%\VirtualBox VMs\
- Linux: ~/VirtualBox VMs/
- MacM1: ~/Library/Containers/com.utmapp.UTM/Data/Documents/
- cd MacOS: ~/VirtualBox VMs/
- 그런 후 가상 머신의 .vdi 파일에서(UTM 사용자의 경우 .qcow2) sha1 포맷의 서명을 검색한다.
- 센토스 서버의 4가지 명령어의 예시는 다음과 같으며,
- Windows: certUtil -hashfile centos_serv.vdi sha1
- Linux: sha1sum centos_serv.vdi
- For Mac M1: shasum Centos.utm/Images/disk-0.qcow2
- MacOS: shasum centos_serv.vdi
- 얻을 수 있는 출력은 다음과 같음
- 6e657c4619944be17df3c31faa030c25e43e40af
- 가상 머신의 서명이 첫 평가 이후로 변경될 수 있으므로, 해당 문제를 위해 **가상 머신을 복사**하거나 혹은 **저장 상태를 사용**할 수 있음.
- 깃 저장소에 가상머신을 넣는 것은 금지되며, 평가 중 Signature.txt 파일의 서명이 가상머신의 서명과 비교될 것입니다.

→ 가상머신의 스냅샷이란? : 특정 시간을 기준으로 가상 머신의 디스크 상태를 그대로 저장하고 스냅샷을 찍은 순간부터 데이터의 차이점이 발생하게 되면 이것을 다른 파일에 기억하는 기술