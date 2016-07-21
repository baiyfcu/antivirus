enum _MESSAGEPROPERTY {
	HDR_NEWSGROUP		= 2,
	HDR_NEWSGROUPS		= 3,
	HDR_REFS			= 4,
	HDR_SUBJECT			= 5,
	HDR_FROM			= 6,
	HDR_MESSAGEID		= 7,
	HDR_RETURNPATH		= 8,
	HDR_RR				= 9,
	HDR_RETRCPTTO		= 0x0A,
	HDR_APPARTO			= 0x0B,
	HDR_RECEIVED		= 0x0C,
	HDR_EXPIRES			= 0x0D,
	HDR_REPLYTO			= 0x0E,
	HDR_XMAILER			= 0x0F,
	HDR_BCC				= 0x10,
	HDR_XUNSENT			= 0x3B,
	HDR_XNEWSRDR		= 0x26,
	HDR_SENDER			= 0x3D,
	HDR_TO				= 0x19,
	HDR_CC				= 0x1D,
	HDR_PATH			= 0x1A,
	HDR_FOLLOWUPTO		= 0x1B,
	HDR_ORG				= 0x25,
	HDR_DATE			= 0x1C,
	HDR_CONTROL			= 0x1E,
	HDR_DISTRIB			= 0x1F,
	HDR_KEYWORDS		= 0x20,
	HDR_SUMMARY			= 0x21,
	HDR_APPROVED		= 0x22,
	HDR_LINES			= 0x23,
	HDR_XREF			= 0x24,
	HDR_XPRI			= 0x27,
	HDR_XMSPRI			= 0x28,
	HDR_MIMEVER			= 0x11,
	HDR_CNTTYPE			= 0x12,
	HDR_CNTDISP			= 0x16,
	HDR_CNTXFER			= 0x13,
	HDR_CNTID			= 0x14,
	HDR_CNTDESC			= 0x15,
	HDR_CNTBASE			= 0x17,
	HDR_CNTLOC			= 0x18,
	HDR_COMMENT			= 0x37,
	HDR_ENCODING		= 0x38,
	HDR_ENCRYPTED		= 0x39,
	HDR_OFFSETS			= 0x3A,
	HDR_ARTICLEID		= 0x3C,
	HDR_DISP_NOTIFICATION_TO = 0x49,
	PAR_BOUNDARY		= 0x2A,
	PAR_CHARSET			= 0x2B,
	PAR_FILENAME		= 0x29,
	PAR_NAME			= 0x2C,
	ATT_FILENAME		= 0x2D,
	ATT_GENFNAME		= 0x2E,
	ATT_NORMSUBJ		= 0x31,
	ATT_ILLEGAL			= 0x32,
	ATT_PRITYPE			= 0x2F,
	ATT_SUBTYPE			= 0x30,
	ATT_RENDERED		= 0x33,
	ATT_SENTTIME		= 0x34,
	ATT_RECVTIME		= 0x35,
	ATT_PRIORITY		= 0x36,
	ATT_SERVER			= 0x3E,
	ATT_ACCOUNTID		= 0x3F,
	ATT_UIDL			= 0x40,
	ATT_STOREMSGID		= 0x41,
	ATT_USERNAME		= 0x42,
	ATT_FORWARDTO		= 0x43,
	ATT_STOREFOLDERID	= 0x44,
	ATT_GHOSTED			= 0x45,
	ATT_UNCACHEDSIZE	= 0x46,
	ATT_COMBINED		= 0x47,
	ATT_AUTOINLINED		= 0x48,
};


struct tagMSGPROPNAME_ {
	_MESSAGEPROPERTY ID;
	char*	Name;
};

tagMSGPROPNAME_ g_MsgPropertyNames[] = {
HDR_NEWSGROUP,	"X-Newsgroup",
HDR_NEWSGROUPS,	"Newsgroups",
HDR_REFS,	"References",
HDR_SUBJECT,	"Subject",
HDR_FROM,	"From",
HDR_MESSAGEID,	"Message-ID",
HDR_RETURNPATH,	"Return-Path",
HDR_RR,	"Rr",
HDR_RETRCPTTO,	"Return-Receipt-To",
HDR_APPARTO,	"Apparently-To",
HDR_RECEIVED,	"Received",
HDR_EXPIRES,	"Expires",
HDR_REPLYTO,	"Reply-To",
HDR_XMAILER,	"X-Mailer",
HDR_BCC,	"Bcc",
HDR_XUNSENT,	"X-Unsent",
HDR_XNEWSRDR,	"X-Newsreader",
HDR_SENDER,	"Sender",
HDR_TO,	"To",
HDR_CC,	"Cc",
HDR_PATH,	"Path",
HDR_FOLLOWUPTO,	"Followup-To",
HDR_ORG,	"Organization",
HDR_DATE,	"Date",
HDR_CONTROL,	"Control",
HDR_DISTRIB,	"Distribution",
HDR_KEYWORDS,	"Keywords",
HDR_SUMMARY,	"Summary",
HDR_APPROVED,	"Approved",
HDR_LINES,	"Lines",
HDR_XREF,	"Xref",
HDR_XPRI,	"X-Priority",
HDR_XMSPRI,	"X-MSMail-Priority",
HDR_MIMEVER,	"MIME-Version",
HDR_CNTTYPE,	"Content-Type",
HDR_CNTDISP,	"Content-Disposition",
HDR_CNTXFER,	"Content-Transfer-Encoding",
HDR_CNTID,	"Content-ID",
HDR_CNTDESC,	"Content-Description",
HDR_CNTBASE,	"Content-Base",
HDR_CNTLOC,	"Content-Location",
HDR_COMMENT,	"Comment",
HDR_ENCODING,	"Encoding",
HDR_ENCRYPTED,	"Encrypted",
HDR_OFFSETS,	"X-Offsets",
HDR_ARTICLEID,	"X-ArticleId",
HDR_DISP_NOTIFICATION_TO,	"Disposition-Notification-To",
PAR_BOUNDARY,	"par:content-type:boundary",
PAR_CHARSET,	"par:content-type:charset",
PAR_FILENAME,	"par:content-disposition:filename",
PAR_NAME,	"par:content-type:name",
ATT_FILENAME,	"att:filename",
ATT_GENFNAME,	"att:generated-filename",
ATT_NORMSUBJ,	"att:normalized-subject",
ATT_ILLEGAL,	"att:illegal-lines",
ATT_PRITYPE,	"att:pri-content-type",
ATT_SUBTYPE,	"att:sub-content-type",
ATT_RENDERED,	"att:rendered",
ATT_SENTTIME,	"att:sent-time",
ATT_RECVTIME,	"att:received-time",
ATT_PRIORITY,	"att:priority",
ATT_SERVER,	"att:athena-server",
ATT_ACCOUNTID,	"att:athena-account-id",
ATT_UIDL,	"att:athena-pop3-uidl",
ATT_STOREMSGID,	"att:athena-store-msgid",
ATT_USERNAME,	"att:athena-user-name",
ATT_FORWARDTO,	"att:athena-forward-to",
ATT_STOREFOLDERID,	"att:athena-store-fdrid",
ATT_GHOSTED,	"att:athena-ghosted",
ATT_UNCACHEDSIZE,	"att:athena-uncachedsize",
ATT_COMBINED,	"att:athena-combined",
ATT_AUTOINLINED,	"att:auto-inlined",
};

char* GetPropertyName(_MESSAGEPROPERTY PropID, char* propName, size_t propNameSz)
{
	int i;
	for (i=0; i<sizeof(g_MsgPropertyNames); i++)
	{
		if (g_MsgPropertyNames[i].ID == PropID)
		{
			char *prp = g_MsgPropertyNames[i].Name;
			if (propName != NULL)
				strcpy_s(propName, propNameSz, prp);
			return prp;
		}
	}
	if (propName != NULL)
	{
		sprintf_s(propName, propNameSz, "property #%02X", PropID);
		return propName;
	}
	return "<unknown>";
}	
