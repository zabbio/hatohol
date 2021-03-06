/*
 * Copyright (C) 2013 Project Hatohol
 *
 * This file is part of Hatohol.
 *
 * Hatohol is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * Hatohol is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Hatohol. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ItemEnum_h
#define ItemEnum_h

enum
{
	// System
	ITEM_ID_NOT_SET,
	ITEM_ID_NOBODY,

	// ZABBIX
	ITEM_ID_ZBX_NODES_NODEID,
	ITEM_ID_ZBX_NODES_NAME,
	ITEM_ID_ZBX_NODES_IP,
	ITEM_ID_ZBX_NODES_PORT,
	ITEM_ID_ZBX_NODES_NODETYPE,
	ITEM_ID_ZBX_NODES_MASTERID,

	ITEM_ID_ZBX_CONFIG_CONFIGID,
	ITEM_ID_ZBX_CONFIG_ALERT_HISTORY,
	ITEM_ID_ZBX_CONFIG_EVENT_HISTORY,
	ITEM_ID_ZBX_CONFIG_REFRESH_UNSUPORTED,
	ITEM_ID_ZBX_CONFIG_WORK_PERIOD,
	ITEM_ID_ZBX_CONFIG_ALERT_USRGRPID,
	ITEM_ID_ZBX_CONFIG_EVENT_ACK_ENABLE,
	ITEM_ID_ZBX_CONFIG_EVENT_EXPIRE,
	ITEM_ID_ZBX_CONFIG_EVENT_SHOW_MAX,
	ITEM_ID_ZBX_CONFIG_DEFAULT_THEME,
	ITEM_ID_ZBX_CONFIG_AUTHENTICATION_TYPE,
	ITEM_ID_ZBX_CONFIG_LDAP_HOST,
	ITEM_ID_ZBX_CONFIG_LDAP_PORT,
	ITEM_ID_ZBX_CONFIG_LDAP_BASE_DN,
	ITEM_ID_ZBX_CONFIG_LDAP_BIND_DN,
	ITEM_ID_ZBX_CONFIG_LDAP_BIND_PASSWORD,
	ITEM_ID_ZBX_CONFIG_LDAP_SEARCH_ATTRIBUTE,
	ITEM_ID_ZBX_CONFIG_DROPDOWN_FIRST_ENTRY,
	ITEM_ID_ZBX_CONFIG_DROPDOWN_FIRST_REMEMBER,
	ITEM_ID_ZBX_CONFIG_DISCOVERY_GROUPID,
	ITEM_ID_ZBX_CONFIG_MAX_INTABLE,
	ITEM_ID_ZBX_CONFIG_SEARCH_LIMITE,
	ITEM_ID_ZBX_CONFIG_SEVERITY_COLOR_0,
	ITEM_ID_ZBX_CONFIG_SEVERITY_COLOR_1,
	ITEM_ID_ZBX_CONFIG_SEVERITY_COLOR_2,
	ITEM_ID_ZBX_CONFIG_SEVERITY_COLOR_3,
	ITEM_ID_ZBX_CONFIG_SEVERITY_COLOR_4,
	ITEM_ID_ZBX_CONFIG_SEVERITY_COLOR_5,
	ITEM_ID_ZBX_CONFIG_SEVERITY_NAME_0,
	ITEM_ID_ZBX_CONFIG_SEVERITY_NAME_1,
	ITEM_ID_ZBX_CONFIG_SEVERITY_NAME_2,
	ITEM_ID_ZBX_CONFIG_SEVERITY_NAME_3,
	ITEM_ID_ZBX_CONFIG_SEVERITY_NAME_4,
	ITEM_ID_ZBX_CONFIG_SEVERITY_NAME_5,
	ITEM_ID_ZBX_CONFIG_OK_PERIOD,
	ITEM_ID_ZBX_CONFIG_BLINK_PERIOD,
	ITEM_ID_ZBX_CONFIG_PROBLEM_UNACK_COLOR,
	ITEM_ID_ZBX_CONFIG_PROBLEM_ACK_COLOR,
	ITEM_ID_ZBX_CONFIG_OK_UNACK_COLOR,
	ITEM_ID_ZBX_CONFIG_OK_ACK_COLOR,
	ITEM_ID_ZBX_CONFIG_PROBLEM_UNACK_STYLE,
	ITEM_ID_ZBX_CONFIG_PROBLEM_ACK_STYLE,
	ITEM_ID_ZBX_CONFIG_OK_UNACK_STYLE,
	ITEM_ID_ZBX_CONFIG_OK_ACK_STYLE,
	ITEM_ID_ZBX_CONFIG_SNMPTRAP_LOGGING,
	ITEM_ID_ZBX_CONFIG_SERVER_CHECK_INTERVAL,

	ITEM_ID_ZBX_USERS_USERID,
	ITEM_ID_ZBX_USERS_ALIAS,
	ITEM_ID_ZBX_USERS_NAME,
	ITEM_ID_ZBX_USERS_SURNAME,
	ITEM_ID_ZBX_USERS_PASSWD,
	ITEM_ID_ZBX_USERS_URL,
	ITEM_ID_ZBX_USERS_AUTOLOGIN,
	ITEM_ID_ZBX_USERS_AUTOLOGOUT,
	ITEM_ID_ZBX_USERS_LANG,
	ITEM_ID_ZBX_USERS_REFRESH,
	ITEM_ID_ZBX_USERS_TYPE,
	ITEM_ID_ZBX_USERS_THEME,
	ITEM_ID_ZBX_USERS_ATTEMPT_FAILED,
	ITEM_ID_ZBX_USERS_ATTEMPT_IP,
	ITEM_ID_ZBX_USERS_ATTEMPT_CLOCK,
	ITEM_ID_ZBX_USERS_ROWS_PER_PAGE,

	ITEM_ID_ZBX_USRGRP_USRGRPID,
	ITEM_ID_ZBX_USRGRP_NAME,
	ITEM_ID_ZBX_USRGRP_GUI_ACCESS,
	ITEM_ID_ZBX_USRGRP_USERS_STATUS,
	ITEM_ID_ZBX_USRGRP_DEBUG_MODE,

	ITEM_ID_ZBX_USERS_GROUPS_ID,
	ITEM_ID_ZBX_USERS_GROUPS_USRGRPID,
	ITEM_ID_ZBX_USERS_GROUPS_USERID,

	ITEM_ID_ZBX_SESSIONS_SESSIONID,
	ITEM_ID_ZBX_SESSIONS_USERID,
	ITEM_ID_ZBX_SESSIONS_LASTACCESS,
	ITEM_ID_ZBX_SESSIONS_STATUS,

	ITEM_ID_ZBX_PROFILES_PROFILEID,
	ITEM_ID_ZBX_PROFILES_USERID,
	ITEM_ID_ZBX_PROFILES_IDX,
	ITEM_ID_ZBX_PROFILES_IDX2,
	ITEM_ID_ZBX_PROFILES_VALUE_ID,
	ITEM_ID_ZBX_PROFILES_VALUE_INT,
	ITEM_ID_ZBX_PROFILES_VALUE_STR,
	ITEM_ID_ZBX_PROFILES_SOURCE,
	ITEM_ID_ZBX_PROFILES_TYPE,

	ITEM_ID_ZBX_USER_HISTORY_USERHISTORYID,
	ITEM_ID_ZBX_USER_HISTORY_USERID,
	ITEM_ID_ZBX_USER_HISTORY_TITLE1,
	ITEM_ID_ZBX_USER_HISTORY_URL1,
	ITEM_ID_ZBX_USER_HISTORY_TITLE2,
	ITEM_ID_ZBX_USER_HISTORY_URL2,
	ITEM_ID_ZBX_USER_HISTORY_TITLE3,
	ITEM_ID_ZBX_USER_HISTORY_URL3,
	ITEM_ID_ZBX_USER_HISTORY_TITLE4,
	ITEM_ID_ZBX_USER_HISTORY_URL4,
	ITEM_ID_ZBX_USER_HISTORY_TITLE5,
	ITEM_ID_ZBX_USER_HISTORY_URL5,

	ITEM_ID_ZBX_TRIGGERS_TRIGGERID,
	ITEM_ID_ZBX_TRIGGERS_EXPRESSION,
	ITEM_ID_ZBX_TRIGGERS_DESCRIPTION,
	ITEM_ID_ZBX_TRIGGERS_URL,
	ITEM_ID_ZBX_TRIGGERS_STATUS,
	ITEM_ID_ZBX_TRIGGERS_VALUE,
	ITEM_ID_ZBX_TRIGGERS_PRIORITY,
	ITEM_ID_ZBX_TRIGGERS_LASTCHANGE,
	ITEM_ID_ZBX_TRIGGERS_COMMENTS,
	ITEM_ID_ZBX_TRIGGERS_ERROR,
	ITEM_ID_ZBX_TRIGGERS_TEMPLATEID,
	ITEM_ID_ZBX_TRIGGERS_TYPE,
	ITEM_ID_ZBX_TRIGGERS_VALUE_FLAGS,
	ITEM_ID_ZBX_TRIGGERS_FLAGS,
	ITEM_ID_ZBX_TRIGGERS_HOSTID, // only when using ZABBIX API

	ITEM_ID_ZBX_FUNCTIONS_FUNCTIONID,
	ITEM_ID_ZBX_FUNCTIONS_ITEMID,
	ITEM_ID_ZBX_FUNCTIONS_TRIGGERID,
	ITEM_ID_ZBX_FUNCTIONS_FUNCTION,
	ITEM_ID_ZBX_FUNCTIONS_PARAMETER,

	ITEM_ID_ZBX_ITEMS_ITEMID,
	ITEM_ID_ZBX_ITEMS_TYPE,
	ITEM_ID_ZBX_ITEMS_SNMP_COMMUNITY,
	ITEM_ID_ZBX_ITEMS_SNMP_OID,
	ITEM_ID_ZBX_ITEMS_HOSTID,
	ITEM_ID_ZBX_ITEMS_NAME,
	ITEM_ID_ZBX_ITEMS_KEY_,
	ITEM_ID_ZBX_ITEMS_DELAY,
	ITEM_ID_ZBX_ITEMS_HISTORY,
	ITEM_ID_ZBX_ITEMS_TRENDS,
	ITEM_ID_ZBX_ITEMS_LASTVALUE,
	ITEM_ID_ZBX_ITEMS_LASTCLOCK,
	ITEM_ID_ZBX_ITEMS_PREVVALUE,
	ITEM_ID_ZBX_ITEMS_STATUS,
	ITEM_ID_ZBX_ITEMS_VALUE_TYPE,
	ITEM_ID_ZBX_ITEMS_TRAPPER_HOSTS,
	ITEM_ID_ZBX_ITEMS_UNITS,
	ITEM_ID_ZBX_ITEMS_MULTIPLIER,
	ITEM_ID_ZBX_ITEMS_DELTA,
	ITEM_ID_ZBX_ITEMS_PREVORGVALUE,
	ITEM_ID_ZBX_ITEMS_SNMPV3_SECURITYNAME,
	ITEM_ID_ZBX_ITEMS_SNMPV3_SECURITYLEVEL,
	ITEM_ID_ZBX_ITEMS_SNMPV3_AUTHPASSPHRASE,
	ITEM_ID_ZBX_ITEMS_SNMPV3_PRIVPASSPHRASE,
	ITEM_ID_ZBX_ITEMS_FORMULA,
	ITEM_ID_ZBX_ITEMS_ERROR,
	ITEM_ID_ZBX_ITEMS_LASTLOGSIZE,
	ITEM_ID_ZBX_ITEMS_LOGTIMEFMT,
	ITEM_ID_ZBX_ITEMS_TEMPLATEID,
	ITEM_ID_ZBX_ITEMS_VALUEMAPID,
	ITEM_ID_ZBX_ITEMS_DELAY_FLEX,
	ITEM_ID_ZBX_ITEMS_PARAMS,
	ITEM_ID_ZBX_ITEMS_IPMI_SENSOR,
	ITEM_ID_ZBX_ITEMS_DATA_TYPE,
	ITEM_ID_ZBX_ITEMS_AUTHTYPE,
	ITEM_ID_ZBX_ITEMS_USERNAME,
	ITEM_ID_ZBX_ITEMS_PASSWORD,
	ITEM_ID_ZBX_ITEMS_PUBLICKEY,
	ITEM_ID_ZBX_ITEMS_PRIVATEKEY,
	ITEM_ID_ZBX_ITEMS_MTIME,
	ITEM_ID_ZBX_ITEMS_LASTNS,
	ITEM_ID_ZBX_ITEMS_FLAGS,
	ITEM_ID_ZBX_ITEMS_FILTER,
	ITEM_ID_ZBX_ITEMS_INTERFACEID,
	ITEM_ID_ZBX_ITEMS_PORT,
	ITEM_ID_ZBX_ITEMS_DESCRIPTION,
	ITEM_ID_ZBX_ITEMS_INVENTORY_LINK,
	ITEM_ID_ZBX_ITEMS_LIFETIME,
	ITEM_ID_ZBX_ITEMS_APPLICATIONID, // only when using ZABBIX API

	ITEM_ID_ZBX_HOSTS_HOSTID,
	ITEM_ID_ZBX_HOSTS_PROXY_HOSTID,
	ITEM_ID_ZBX_HOSTS_HOST,
	ITEM_ID_ZBX_HOSTS_STATUS,
	ITEM_ID_ZBX_HOSTS_DISABLE_UNTIL,
	ITEM_ID_ZBX_HOSTS_ERROR,
	ITEM_ID_ZBX_HOSTS_AVAILABLE,
	ITEM_ID_ZBX_HOSTS_ERRORS_FROM,
	ITEM_ID_ZBX_HOSTS_LASTACCESS,
	ITEM_ID_ZBX_HOSTS_IPMI_AUTHTYPE,
	ITEM_ID_ZBX_HOSTS_IPMI_PRIVILEGE,
	ITEM_ID_ZBX_HOSTS_IPMI_USERNAME,
	ITEM_ID_ZBX_HOSTS_IPMI_PASSWORD,
	ITEM_ID_ZBX_HOSTS_IPMI_DISABLE_UNTIL,
	ITEM_ID_ZBX_HOSTS_IPMI_AVAILABLE,
	ITEM_ID_ZBX_HOSTS_SNMP_DISABLE_UNTIL,
	ITEM_ID_ZBX_HOSTS_SNMP_AVAILABLE,
	ITEM_ID_ZBX_HOSTS_MAINTENANCEID,
	ITEM_ID_ZBX_HOSTS_MAINTENANCE_STATUS,
	ITEM_ID_ZBX_HOSTS_MAINTENANCE_TYPE,
	ITEM_ID_ZBX_HOSTS_MAINTENANCE_FROM,
	ITEM_ID_ZBX_HOSTS_IPMI_ERRORS_FROM,
	ITEM_ID_ZBX_HOSTS_SNMP_ERRORS_FROM,
	ITEM_ID_ZBX_HOSTS_IPMI_ERROR,
	ITEM_ID_ZBX_HOSTS_SNMP_ERROR,
	ITEM_ID_ZBX_HOSTS_JMX_DISABLE_UNTIL,
	ITEM_ID_ZBX_HOSTS_JMX_AVAILABLE,
	ITEM_ID_ZBX_HOSTS_JMX_ERRORS_FROM,
	ITEM_ID_ZBX_HOSTS_JMX_ERROR,
	ITEM_ID_ZBX_HOSTS_NAME,

	ITEM_ID_ZBX_GROUPS_GROUPID,
	ITEM_ID_ZBX_GROUPS_NAME,
	ITEM_ID_ZBX_GROUPS_INTERNAL,

	ITEM_ID_ZBX_HOSTS_GROUPS_HOSTGROUPID,
	ITEM_ID_ZBX_HOSTS_GROUPS_HOSTID,
	ITEM_ID_ZBX_HOSTS_GROUPS_GROUPID,

	ITEM_ID_ZBX_TRIGGER_DEPENDS_TRIGGERDEPID,
	ITEM_ID_ZBX_TRIGGER_DEPENDS_TRIGGERID_DOWN,
	ITEM_ID_ZBX_TRIGGER_DEPENDS_TRIGGERID_UP,

	ITEM_ID_ZBX_EVENTS_EVENTID,
	ITEM_ID_ZBX_EVENTS_SOURCE,
	ITEM_ID_ZBX_EVENTS_OBJECT,
	ITEM_ID_ZBX_EVENTS_OBJECTID,
	ITEM_ID_ZBX_EVENTS_CLOCK,
	ITEM_ID_ZBX_EVENTS_VALUE,
	ITEM_ID_ZBX_EVENTS_ACKNOWLEDGED,
	ITEM_ID_ZBX_EVENTS_NS,
	ITEM_ID_ZBX_EVENTS_VALUE_CHANGED,

	ITEM_ID_ZBX_SCRIPTS_SCRIPTID,
	ITEM_ID_ZBX_SCRIPTS_NAME,
	ITEM_ID_ZBX_SCRIPTS_COMMAND,
	ITEM_ID_ZBX_SCRIPTS_HOST_ACCESS,
	ITEM_ID_ZBX_SCRIPTS_USRGRPID,
	ITEM_ID_ZBX_SCRIPTS_GROUPID,
	ITEM_ID_ZBX_SCRIPTS_DESCRIPTION,
	ITEM_ID_ZBX_SCRIPTS_CONFIRMATION,
	ITEM_ID_ZBX_SCRIPTS_TYPE,
	ITEM_ID_ZBX_SCRIPTS_EXECUTE_ON,

	ITEM_ID_ZBX_HOST_INVENTORY_HOSTID,
	ITEM_ID_ZBX_HOST_INVENTORY_INVENTORY_MODE,
	ITEM_ID_ZBX_HOST_INVENTORY_TYPE,
	ITEM_ID_ZBX_HOST_INVENTORY_TYPE_FULL,
	ITEM_ID_ZBX_HOST_INVENTORY_NAME,
	ITEM_ID_ZBX_HOST_INVENTORY_ALIAS,
	ITEM_ID_ZBX_HOST_INVENTORY_OS,
	ITEM_ID_ZBX_HOST_INVENTORY_OS_FULL,
	ITEM_ID_ZBX_HOST_INVENTORY_OS_SHORT,
	ITEM_ID_ZBX_HOST_INVENTORY_SERIALNO_A,
	ITEM_ID_ZBX_HOST_INVENTORY_SERIALNO_B,
	ITEM_ID_ZBX_HOST_INVENTORY_TAG,
	ITEM_ID_ZBX_HOST_INVENTORY_ASSET_TAG,
	ITEM_ID_ZBX_HOST_INVENTORY_MACADDRESS_A,
	ITEM_ID_ZBX_HOST_INVENTORY_MACADDRESS_B,
	ITEM_ID_ZBX_HOST_INVENTORY_HARDWARE,
	ITEM_ID_ZBX_HOST_INVENTORY_HARDWARE_FULL,
	ITEM_ID_ZBX_HOST_INVENTORY_SOFTWARE,
	ITEM_ID_ZBX_HOST_INVENTORY_SOFTWARE_FULL,
	ITEM_ID_ZBX_HOST_INVENTORY_SOFTWARE_APP_A,
	ITEM_ID_ZBX_HOST_INVENTORY_SOFTWARE_APP_B,
	ITEM_ID_ZBX_HOST_INVENTORY_SOFTWARE_APP_C,
	ITEM_ID_ZBX_HOST_INVENTORY_SOFTWARE_APP_D,
	ITEM_ID_ZBX_HOST_INVENTORY_SOFTWARE_APP_E,
	ITEM_ID_ZBX_HOST_INVENTORY_CONTACT,
	ITEM_ID_ZBX_HOST_INVENTORY_LOCATION,
	ITEM_ID_ZBX_HOST_INVENTORY_LOCATION_LAT,
	ITEM_ID_ZBX_HOST_INVENTORY_LOCATION_LON,
	ITEM_ID_ZBX_HOST_INVENTORY_NOTES,
	ITEM_ID_ZBX_HOST_INVENTORY_CHASSIS,
	ITEM_ID_ZBX_HOST_INVENTORY_MODEL,
	ITEM_ID_ZBX_HOST_INVENTORY_HW_ARCH,
	ITEM_ID_ZBX_HOST_INVENTORY_VENDOR,
	ITEM_ID_ZBX_HOST_INVENTORY_CONTRACT_NUMBER,
	ITEM_ID_ZBX_HOST_INVENTORY_INSTALLER_NAME,
	ITEM_ID_ZBX_HOST_INVENTORY_DEPLOYMENT_STATUS,
	ITEM_ID_ZBX_HOST_INVENTORY_URL_A,
	ITEM_ID_ZBX_HOST_INVENTORY_URL_B,
	ITEM_ID_ZBX_HOST_INVENTORY_URL_C,
	ITEM_ID_ZBX_HOST_INVENTORY_HOST_NETWORKS,
	ITEM_ID_ZBX_HOST_INVENTORY_HOST_NETMASK,
	ITEM_ID_ZBX_HOST_INVENTORY_HOST_ROUTER,
	ITEM_ID_ZBX_HOST_INVENTORY_OOB_IP,
	ITEM_ID_ZBX_HOST_INVENTORY_OOB_NETMASK,
	ITEM_ID_ZBX_HOST_INVENTORY_OOB_ROUTER,
	ITEM_ID_ZBX_HOST_INVENTORY_DATE_HW_PURCHASE,
	ITEM_ID_ZBX_HOST_INVENTORY_DATE_HW_INSTALL,
	ITEM_ID_ZBX_HOST_INVENTORY_DATE_HW_EXPIRY,
	ITEM_ID_ZBX_HOST_INVENTORY_DATE_HW_DECOMM,
	ITEM_ID_ZBX_HOST_INVENTORY_SITE_ADDRESS_A,
	ITEM_ID_ZBX_HOST_INVENTORY_SITE_ADDRESS_B,
	ITEM_ID_ZBX_HOST_INVENTORY_SITE_ADDRESS_C,
	ITEM_ID_ZBX_HOST_INVENTORY_SITE_CITY,
	ITEM_ID_ZBX_HOST_INVENTORY_SITE_STATE,
	ITEM_ID_ZBX_HOST_INVENTORY_SITE_COUNTRY,
	ITEM_ID_ZBX_HOST_INVENTORY_SITE_ZIP,
	ITEM_ID_ZBX_HOST_INVENTORY_SITE_RACK,
	ITEM_ID_ZBX_HOST_INVENTORY_SITE_NOTES,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_1_NAME,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_1_EMAIL,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_1_PHONE_A,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_1_PHONE_B,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_1_CELL,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_1_SCREEN,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_1_NOTES,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_2_NAME,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_2_EMAIL,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_2_PHONE_A,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_2_PHONE_B,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_2_CELL,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_2_SCREEN,
	ITEM_ID_ZBX_HOST_INVENTORY_POC_2_NOTES,

	ITEM_ID_ZBX_RIGHTS_RIGHTID,
	ITEM_ID_ZBX_RIGHTS_GROUPID,
	ITEM_ID_ZBX_RIGHTS_PERMISSION,
	ITEM_ID_ZBX_RIGHTS_ID,

	ITEM_ID_ZBX_SCREENS_SCREENID,
	ITEM_ID_ZBX_SCREENS_NAME,
	ITEM_ID_ZBX_SCREENS_HSIZE,
	ITEM_ID_ZBX_SCREENS_VSIZE,
	ITEM_ID_ZBX_SCREENS_TEMPLATEID,

	ITEM_ID_ZBX_GRAPHS_GRAPHID,
	ITEM_ID_ZBX_GRAPHS_NAME,
	ITEM_ID_ZBX_GRAPHS_WIDTH,
	ITEM_ID_ZBX_GRAPHS_HEIGHT,
	ITEM_ID_ZBX_GRAPHS_YAXISMIN,
	ITEM_ID_ZBX_GRAPHS_YAXISMAX,
	ITEM_ID_ZBX_GRAPHS_TEMPLATEID,
	ITEM_ID_ZBX_GRAPHS_SHOW_WORK_PERIOD,
	ITEM_ID_ZBX_GRAPHS_SHOW_TRIGGERS,
	ITEM_ID_ZBX_GRAPHS_GRAPHTYPE,
	ITEM_ID_ZBX_GRAPHS_SHOW_LEGEND,
	ITEM_ID_ZBX_GRAPHS_SHOW_3D,
	ITEM_ID_ZBX_GRAPHS_PERCENT_LEFT,
	ITEM_ID_ZBX_GRAPHS_PERCENT_RIGHT,
	ITEM_ID_ZBX_GRAPHS_YMIN_TYPE,
	ITEM_ID_ZBX_GRAPHS_YMAX_TYPE,
	ITEM_ID_ZBX_GRAPHS_YMIN_ITEMID,
	ITEM_ID_ZBX_GRAPHS_YMAX_ITEMID,
	ITEM_ID_ZBX_GRAPHS_FLAGS,

	ITEM_ID_ZBX_GRAPHS_ITEMS_GITEMID,
	ITEM_ID_ZBX_GRAPHS_ITEMS_GRAPHID,
	ITEM_ID_ZBX_GRAPHS_ITEMS_ITEMID,
	ITEM_ID_ZBX_GRAPHS_ITEMS_DRAWTYPE,
	ITEM_ID_ZBX_GRAPHS_ITEMS_SORTORDER,
	ITEM_ID_ZBX_GRAPHS_ITEMS_COLOR,
	ITEM_ID_ZBX_GRAPHS_ITEMS_YAXISSIDE,
	ITEM_ID_ZBX_GRAPHS_ITEMS_CALC_FNC,
	ITEM_ID_ZBX_GRAPHS_ITEMS_TYPE,

	ITEM_ID_ZBX_SYSMAPS_SYSMAPID,
	ITEM_ID_ZBX_SYSMAPS_NAME,
	ITEM_ID_ZBX_SYSMAPS_WIDTH,
	ITEM_ID_ZBX_SYSMAPS_HEIGHT,
	ITEM_ID_ZBX_SYSMAPS_BACKGROUNDID,
	ITEM_ID_ZBX_SYSMAPS_LABEL_TYPE,
	ITEM_ID_ZBX_SYSMAPS_LABEL_LOCATION,
	ITEM_ID_ZBX_SYSMAPS_HIGHLIGHT,
	ITEM_ID_ZBX_SYSMAPS_EXPANDPROBLEM,
	ITEM_ID_ZBX_SYSMAPS_MARKELEMENTS,
	ITEM_ID_ZBX_SYSMAPS_SHOW_UNACK,
	ITEM_ID_ZBX_SYSMAPS_GRID_SIZE,
	ITEM_ID_ZBX_SYSMAPS_GRID_SHOW,
	ITEM_ID_ZBX_SYSMAPS_GRID_ALIGN,
	ITEM_ID_ZBX_SYSMAPS_LABEL_FORMAT,
	ITEM_ID_ZBX_SYSMAPS_LABEL_TYPE_HOST,
	ITEM_ID_ZBX_SYSMAPS_LABEL_TYPE_HOSTGROUP,
	ITEM_ID_ZBX_SYSMAPS_LABEL_TYPE_TRIGGER,
	ITEM_ID_ZBX_SYSMAPS_LABEL_TYPE_MAP,
	ITEM_ID_ZBX_SYSMAPS_LABEL_TYPE_IMAGE,
	ITEM_ID_ZBX_SYSMAPS_LABEL_STRING_HOST,
	ITEM_ID_ZBX_SYSMAPS_LABEL_STRING_HOSTGROUP,
	ITEM_ID_ZBX_SYSMAPS_LABEL_STRING_TRIGGER,
	ITEM_ID_ZBX_SYSMAPS_LABEL_STRING_MAP,
	ITEM_ID_ZBX_SYSMAPS_LABEL_STRING_IMAGE,
	ITEM_ID_ZBX_SYSMAPS_ICONMAPID,
	ITEM_ID_ZBX_SYSMAPS_EXPAND_MACROS,

	ITEM_ID_ZBX_SYSMAP_URL_SYSMAPURLID,
	ITEM_ID_ZBX_SYSMAP_URL_SYSMAPID,
	ITEM_ID_ZBX_SYSMAP_URL_NAME,
	ITEM_ID_ZBX_SYSMAP_URL_URL,
	ITEM_ID_ZBX_SYSMAP_URL_ELEMENTTYPE,

	ITEM_ID_ZBX_DRULES_DRULEID,
	ITEM_ID_ZBX_DRULES_PROXY_HOSTID,
	ITEM_ID_ZBX_DRULES_NAME,
	ITEM_ID_ZBX_DRULES_IPRANGE,
	ITEM_ID_ZBX_DRULES_DELAY,
	ITEM_ID_ZBX_DRULES_NEXTCHECK,
	ITEM_ID_ZBX_DRULES_STATUS,

	ITEM_ID_ZBX_APPLICATIONS_APPLICATIONID,
	ITEM_ID_ZBX_APPLICATIONS_HOSTID,
	ITEM_ID_ZBX_APPLICATIONS_NAME,
	ITEM_ID_ZBX_APPLICATIONS_TEMPLATEID,

	// Nagios
	ITEM_ID_NAGIOS_SERVICES_SERVICE_ID,
	ITEM_ID_NAGIOS_SERVICES_HOST_OBJECT_ID,
	ITEM_ID_NAGIOS_SERVICES_SERVICE_OBJECT_ID,

	ITEM_ID_NAGIOS_SERVICESTATUS_SERVICE_OBJECT_ID,
	ITEM_ID_NAGIOS_SERVICESTATUS_STATUS_UPDATE_TIME,
	ITEM_ID_NAGIOS_SERVICESTATUS_OUTPUT,
	ITEM_ID_NAGIOS_SERVICESTATUS_CURRENT_STATE,
	ITEM_ID_NAGIOS_SERVICESTATUS_CHECK_COMMAND,

	ITEM_ID_NAGIOS_HOSTS_HOST_ID,
	ITEM_ID_NAGIOS_HOSTS_HOST_OBJECT_ID,
	ITEM_ID_NAGIOS_HOSTS_DISPLAY_NAME,

	ITEM_ID_NAGIOS_STATEHISTORY_STATEHISTORY_ID,
	ITEM_ID_NAGIOS_STATEHISTORY_STATE_TIME,
	ITEM_ID_NAGIOS_STATEHISTORY_OBJECT_ID,
	ITEM_ID_NAGIOS_STATEHISTORY_STATE,
	ITEM_ID_NAGIOS_STATEHISTORY_STATE_TYPE,
	ITEM_ID_NAGIOS_STATEHISTORY_OUTPUT,
};

#endif // ItemEnum_h
