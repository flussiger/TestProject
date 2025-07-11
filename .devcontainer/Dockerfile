FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    curl \
    wget \
    unzip \
    zip \
    tar \
    pkg-config \
    libsqlite3-dev \
    libssl-dev \
    python3 python3-pip \
    ninja-build \
  && rm -rf /var/lib/apt/lists/*

# Installiere vcpkg
WORKDIR /opt
RUN git clone https://github.com/microsoft/vcpkg.git \
    && cd vcpkg \
    && ./bootstrap-vcpkg.sh \
    && ./vcpkg install curl nlohmann-json sqlite3

ENV VCPKG_ROOT=/opt/vcpkg
ENV PATH="${VCPKG_ROOT}:${PATH}"

WORKDIR /workspace
