// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "Hbase.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::apache::hadoop::hbase::thrift;

class HbaseHandler : virtual public HbaseIf {
 public:
  HbaseHandler() {
    // Your initialization goes here
  }

  void enableTable(const Bytes& tableName) {
    // Your implementation goes here
    printf("enableTable\n");
  }

  void disableTable(const Bytes& tableName) {
    // Your implementation goes here
    printf("disableTable\n");
  }

  bool isTableEnabled(const Bytes& tableName) {
    // Your implementation goes here
    printf("isTableEnabled\n");
  }

  void compact(const Bytes& tableNameOrRegionName) {
    // Your implementation goes here
    printf("compact\n");
  }

  void majorCompact(const Bytes& tableNameOrRegionName) {
    // Your implementation goes here
    printf("majorCompact\n");
  }

  void getTableNames(std::vector<Text> & _return) {
    // Your implementation goes here
    printf("getTableNames\n");
  }

  void getColumnDescriptors(std::map<Text, ColumnDescriptor> & _return, const Text& tableName) {
    // Your implementation goes here
    printf("getColumnDescriptors\n");
  }

  void getTableRegions(std::vector<TRegionInfo> & _return, const Text& tableName) {
    // Your implementation goes here
    printf("getTableRegions\n");
  }

  void createTable(const Text& tableName, const std::vector<ColumnDescriptor> & columnFamilies) {
    // Your implementation goes here
    printf("createTable\n");
  }

  void deleteTable(const Text& tableName) {
    // Your implementation goes here
    printf("deleteTable\n");
  }

  void get(std::vector<TCell> & _return, const Text& tableName, const Text& row, const Text& column, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("get\n");
  }

  void getVer(std::vector<TCell> & _return, const Text& tableName, const Text& row, const Text& column, const int32_t numVersions, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("getVer\n");
  }

  void getVerTs(std::vector<TCell> & _return, const Text& tableName, const Text& row, const Text& column, const int64_t timestamp, const int32_t numVersions, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("getVerTs\n");
  }

  void getRow(std::vector<TRowResult> & _return, const Text& tableName, const Text& row, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("getRow\n");
  }

  void getRowWithColumns(std::vector<TRowResult> & _return, const Text& tableName, const Text& row, const std::vector<Text> & columns, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("getRowWithColumns\n");
  }

  void getRowTs(std::vector<TRowResult> & _return, const Text& tableName, const Text& row, const int64_t timestamp, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("getRowTs\n");
  }

  void getRowWithColumnsTs(std::vector<TRowResult> & _return, const Text& tableName, const Text& row, const std::vector<Text> & columns, const int64_t timestamp, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("getRowWithColumnsTs\n");
  }

  void getRows(std::vector<TRowResult> & _return, const Text& tableName, const std::vector<Text> & rows, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("getRows\n");
  }

  void getRowsWithColumns(std::vector<TRowResult> & _return, const Text& tableName, const std::vector<Text> & rows, const std::vector<Text> & columns, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("getRowsWithColumns\n");
  }

  void getRowsTs(std::vector<TRowResult> & _return, const Text& tableName, const std::vector<Text> & rows, const int64_t timestamp, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("getRowsTs\n");
  }

  void getRowsWithColumnsTs(std::vector<TRowResult> & _return, const Text& tableName, const std::vector<Text> & rows, const std::vector<Text> & columns, const int64_t timestamp, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("getRowsWithColumnsTs\n");
  }

  void mutateRow(const Text& tableName, const Text& row, const std::vector<Mutation> & mutations, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("mutateRow\n");
  }

  void mutateRowTs(const Text& tableName, const Text& row, const std::vector<Mutation> & mutations, const int64_t timestamp, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("mutateRowTs\n");
  }

  void mutateRows(const Text& tableName, const std::vector<BatchMutation> & rowBatches, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("mutateRows\n");
  }

  void mutateRowsTs(const Text& tableName, const std::vector<BatchMutation> & rowBatches, const int64_t timestamp, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("mutateRowsTs\n");
  }

  int64_t atomicIncrement(const Text& tableName, const Text& row, const Text& column, const int64_t value) {
    // Your implementation goes here
    printf("atomicIncrement\n");
  }

  void deleteAll(const Text& tableName, const Text& row, const Text& column, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("deleteAll\n");
  }

  void deleteAllTs(const Text& tableName, const Text& row, const Text& column, const int64_t timestamp, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("deleteAllTs\n");
  }

  void deleteAllRow(const Text& tableName, const Text& row, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("deleteAllRow\n");
  }

  void increment(const TIncrement& increment) {
    // Your implementation goes here
    printf("increment\n");
  }

  void incrementRows(const std::vector<TIncrement> & increments) {
    // Your implementation goes here
    printf("incrementRows\n");
  }

  void deleteAllRowTs(const Text& tableName, const Text& row, const int64_t timestamp, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("deleteAllRowTs\n");
  }

  ScannerID scannerOpenWithScan(const Text& tableName, const TScan& scan, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("scannerOpenWithScan\n");
  }

  ScannerID scannerOpen(const Text& tableName, const Text& startRow, const std::vector<Text> & columns, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("scannerOpen\n");
  }

  ScannerID scannerOpenWithStop(const Text& tableName, const Text& startRow, const Text& stopRow, const std::vector<Text> & columns, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("scannerOpenWithStop\n");
  }

  ScannerID scannerOpenWithPrefix(const Text& tableName, const Text& startAndPrefix, const std::vector<Text> & columns, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("scannerOpenWithPrefix\n");
  }

  ScannerID scannerOpenTs(const Text& tableName, const Text& startRow, const std::vector<Text> & columns, const int64_t timestamp, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("scannerOpenTs\n");
  }

  ScannerID scannerOpenWithStopTs(const Text& tableName, const Text& startRow, const Text& stopRow, const std::vector<Text> & columns, const int64_t timestamp, const std::map<Text, Text> & attributes) {
    // Your implementation goes here
    printf("scannerOpenWithStopTs\n");
  }

  void scannerGet(std::vector<TRowResult> & _return, const ScannerID id) {
    // Your implementation goes here
    printf("scannerGet\n");
  }

  void scannerGetList(std::vector<TRowResult> & _return, const ScannerID id, const int32_t nbRows) {
    // Your implementation goes here
    printf("scannerGetList\n");
  }

  void scannerClose(const ScannerID id) {
    // Your implementation goes here
    printf("scannerClose\n");
  }

  void getRowOrBefore(std::vector<TCell> & _return, const Text& tableName, const Text& row, const Text& family) {
    // Your implementation goes here
    printf("getRowOrBefore\n");
  }

  void getRegionInfo(TRegionInfo& _return, const Text& row) {
    // Your implementation goes here
    printf("getRegionInfo\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<HbaseHandler> handler(new HbaseHandler());
  shared_ptr<TProcessor> processor(new HbaseProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

