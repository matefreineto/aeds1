FROM ubuntu:22.04

# Evita perguntas interativas durante a instalação
ENV DEBIAN_FRONTEND=noninteractive

# Atualiza o sistema e instala ferramentas essenciais para C
RUN apt-get update && apt-get install -y \
    build-essential \
    gdb \
    valgrind \
    git \
    && rm -rf /var/lib/apt/lists/*