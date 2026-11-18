FROM debian

COPY lab4/ /app/

RUN apt update && apt install -y make

WORKDIR /app

RUN make main

ENTRYPOINT ["/app/main"]
