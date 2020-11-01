FROM ubuntu:18.04

RUN apt-get update \
    && apt-get install software-properties-common libssl-dev \
    libevent-dev libboost-system-dev libboost-filesystem-dev libboost-chrono-dev libboost-test-dev libboost-thread-dev -y

RUN add-apt-repository ppa:bitcoin/bitcoin -y
RUN apt-get update
RUN apt-get install libdb4.8-dev libdb4.8++-dev -y

