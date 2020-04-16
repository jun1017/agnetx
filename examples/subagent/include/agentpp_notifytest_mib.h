/*_############################################################################
  _## 
  _##  agentpp_notifytest_mib.h  
  _## 
  _##
  _##  AgentX++ 2
  _##  -------------------------------------
  _##  Copyright (C) 2000-2013 - Frank Fock
  _##  
  _##  Use of this software is subject to the license agreement you received
  _##  with this software and which can be downloaded from 
  _##  http://www.agentpp.com
  _##
  _##  This is licensed software and may not be used in a commercial
  _##  environment, except for evaluation purposes, unless a valid
  _##  license has been purchased.
  _##  
  _##########################################################################*/



//--AgentGen BEGIN=_BEGIN
//--AgentGen END


#ifndef _agentpp_notifytest_mib_h
#define _agentpp_notifytest_mib_h


#include <agent_pp/mib.h>
#include <agent_pp/snmp_textual_conventions.h>
#include <agent_pp/notification_originator.h>
#include <agentx_pp/agentx_subagent.h>


#define oidAgentppNotifyTest             "1.3.6.1.4.1.4976.6.2.1.1.0"
#define oidAgentppNotifyTestAllTypes     "1.3.6.1.4.1.4976.6.2.2.0.1"



//--AgentGen BEGIN=_INCLUDE
#ifdef AGENTPP_NAMESPACE
namespace Agentpp {
#endif
//--AgentGen END


/**
 *  agentppNotifyTest
 *
 * "By setting this object to one of its enumerated
 * values generates a corresponding notification.
 * When reading this object it will return the value
 * corresponding to the last notification type sent."
 */


class agentppNotifyTest: public MibLeaf {

public:
	agentppNotifyTest();
	virtual ~agentppNotifyTest();

	static agentppNotifyTest* instance;

	virtual void       	get_request(Request*, int);
	virtual long       	get_state();
	virtual void       	set_state(long);
	virtual int        	set(const Vbx&);
	virtual int        	prepare_set_request(Request*, int&);
	virtual bool    	value_ok(const Vbx&);
	enum labels {
		e_agentppNotifyTestAllTypes = 1 };

//--AgentGen BEGIN=agentppNotifyTest
	void send_agentppNotifyTestAllTypes();
//--AgentGen END
};


/**
 *  agentppNotifyTestAllTypes
 *
 * "A notification with objects of all possible SNMPv2/v3 types."
 */


class agentppNotifyTestAllTypes {

public:
	agentppNotifyTestAllTypes(SubAgentXMib*);
	virtual ~agentppNotifyTestAllTypes();

	virtual void        	generate(Vbx*, int, const NS_SNMP OctetStr&);
protected:
	SubAgentXMib*	my_mib;

//--AgentGen BEGIN=agentppNotifyTestAllTypes
//--AgentGen END
};


class agentpp_notifytest_mib: public MibGroup
{
  public:
	agentpp_notifytest_mib(const NS_SNMP OctetStr&, SubAgentXMib*);
	virtual ~agentpp_notifytest_mib() { }

//--AgentGen BEGIN=agentpp_notifytest_mib
//--AgentGen END

};

//--AgentGen BEGIN=_END
#ifdef AGENTPP_NAMESPACE
}
#endif

//--AgentGen END


/**
 * agentpp_notifytest_mib.h generated by AgentGen 1.6.2 for AGENT++v3.4 
 * Mon Jul 23 20:51:54 GMT+02:00 2001.
 */


#endif

