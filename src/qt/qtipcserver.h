#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define x11bitcoin-Qt message queue name
#define BITCOINURI_QUEUE_NAME "x11bitcoinURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
