
#include <iostream> 
#include <vector>
#include <string>
#include "CoreLayer/ServiceConfig.h"
#include"CoreLayer/ServiceOperationBuilder/ServiceOperatoinBuilder.h"
#include"CoreLayer/Operations/DeserializationOperation/DeserializationOperation.h"
#include"CoreLayer/Operations/LogOperation/LogOperation.h"
#include"CoreLayer/Operations/NetworkOperation/NetworkOperation.h"
#include"CoreLayer/Operations/ValidationOperation/ValidationOperation.h"
#include"CoreLayer/Operations/RequestConfigurationOperation/RequestConfigurationOperation.h"
#include "CoreLayer/Operations/SerializationOperation/SerializationOperation.h"

using namespace std;

int main()
{
	string t;
	string reConOp = "Owrekog";
	int netOp = 234;
	LogOperationEnumData logOp = LogOperationEnumData::debug; //������ ���, ��� enum class
	bool* valOp = new bool;
	bool g;
	vector <string> desOp;
	desOp.push_back("kekfke");
	//ServiceConfig* config = new ServiceConfig("qeqeqe", 3131,&logOp , &(g = 1), desOp);
	GenericServiceConfig<string>* config = new GenericServiceConfig<string>(&(t="RABOTAET"), "qeqeqe", 3131, &logOp, &(g = 1), desOp);
	ServiceOperatoinBuilder<string>* b = new ServiceOperatoinBuilder<string>();
	vector <Operation*> a = b->obtainOperations(config);
	for (Operation* c : a)
	{
		c->execute();
		cout << " ";
	}
}
