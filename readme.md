# Project name or Logo
![off nara logo](https://user-images.githubusercontent.com/76986402/194733403-38135655-c8c1-45f3-b019-eb20fbda87e9.JPG)

## 프로잭트 소개
현재 군의 행정업무는 온나라 시스템을 이용한 전자결재 방식을 이용하고 있지만, 신규 안건, 비밀 등 서면결재를 받아야 하는 문서들은 결재를 받기위해 지휘관에게 직접 찾아가야 한다. 하지만 지휘관이 부재일 시 대기 및 재방문으로 허비되는 시간이 있다. 이 과정에서 상당한 시간이 소요되는 것을 느꼈고 이를 완화하기 위한 아이템을 구상하였다. 자율주행을 통해 지휘관의 사무실까지 서류를 가지고 운반하며, 지정된 인원만 열람할 수 있는 잠금장치를 탑재한 로봇이다.

## 기능 설명
젯슨나노, 아두이노Mega를 이용하여 제어부를 컨트롤할 할 것이며, 자율주행은 RPLIDAR A2 모델을 이용한 SLAM알고리즘을 이용할 것이다. 젯슨 나노를 이용한 ROS프로그래밍을 할 것이다.
1. ROS프로그래밍 : Hector_SLAM 알고리즘을 이용한 맵핑 및 위치추정을 할 것이며, 맵좌표를 아누이노Mega 전달하여 해당 위치까지 로봇이 이동할 수 있도록 제어
2. 제어부 컨트롤 : 아두이노Mega를 이용할 것이며 옴니휠 3륜 형태의 하드웨어를 제어 
3. 오도메트리 : 6자유도 센서 및 엔코더를 이용한 로봇이 이동한 거리를 파악하기 위한 위치제어 알고리즘
4. 지문인식 : 지문센서와 아두이노UNO를 이용하여 지문 등록을 할 것이며 시리얼통신을 통해 젯슨 나노에 잠금장치의 개방 여부 전달

## 컴퓨터 구성 / 필수 조건 안내 (Prerequisites)
* Desktop / windows10
* Jetson Nano / Ubuntu 18.04

## 기술 스택 (Technique Used) 
### Server(back-end)
 -  nodejs, php, java 등 서버 언어 버전 
 - express, laravel, sptring boot 등 사용한 프레임워크 
 - DB 등 사용한 다른 프로그램 
 
### Front-end
 -  react.js, vue.js 등 사용한 front-end 프레임워크 
 -  UI framework
 - 기타 사용한 라이브러리

## 설치 안내 (Installation Process)
```bash
$ git clone git주소
$ yarn or npm install
$ yarn start or npm run start
```

## 프로젝트 사용법 (Getting Started)
**마크다운 문법을 이용하여 자유롭게 기재**

잘 모를 경우
구글 검색 - 마크다운 문법
[https://post.naver.com/viewer/postView.nhn?volumeNo=24627214&memberNo=42458017](https://post.naver.com/viewer/postView.nhn?volumeNo=24627214&memberNo=42458017)

 편한 마크다운 에디터를 찾아서 사용
 샘플 에디터 [https://stackedit.io/app#](https://stackedit.io/app#)
 
## 팀 정보 (Team Information)
- 주윤철 (caitfuspe@gmail.com), Github Id: caitfuspe
- 손용헌 (heon8773@gmail.com), Github Id: heon8773

## 저작권 및 사용권 정보 (Copyleft / End User License)
 * [MIT](https://github.com/osam2020-WEB/Sample-ProjectName-TeamName/blob/master/license.md)

This project is licensed under the terms of the MIT license.

※ [라이선스 비교표(클릭)](https://olis.or.kr/license/compareGuide.do)

※ [Github 내 라이선스 키워드(클릭)](https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/licensing-a-repository)

※ [\[참조\] Github license의 종류와 나에게 맞는 라이선스 선택하기(클릭)](https://flyingsquirrel.medium.com/github-license%EC%9D%98-%EC%A2%85%EB%A5%98%EC%99%80-%EB%82%98%EC%97%90%EA%B2%8C-%EB%A7%9E%EB%8A%94-%EB%9D%BC%EC%9D%B4%EC%84%A0%EC%8A%A4-%EC%84%A0%ED%83%9D%ED%95%98%EA%B8%B0-ae29925e8ff4)
