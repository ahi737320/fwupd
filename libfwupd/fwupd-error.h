/*
 * Copyright (C) 2015-2016 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#ifndef __FWUPD_ERROR_H
#define __FWUPD_ERROR_H

#include <glib.h>

#define FWUPD_ERROR			fwupd_error_quark()

/**
 * FwupdError:
 * @FWUPD_ERROR_INTERNAL:			Internal error
 * @FWUPD_ERROR_VERSION_NEWER:			Installed newer firmware version
 * @FWUPD_ERROR_VERSION_SAME:			Installed same firmware version
 * @FWUPD_ERROR_ALREADY_PENDING:		Already set be be installed offline
 * @FWUPD_ERROR_AUTH_FAILED:			Failed to get authentication
 * @FWUPD_ERROR_READ:				Failed to read from device
 * @FWUPD_ERROR_WRITE:				Failed to write to the device
 * @FWUPD_ERROR_INVALID_FILE:			Invalid file format
 * @FWUPD_ERROR_NOT_FOUND:			No matching device exists
 * @FWUPD_ERROR_NOTHING_TO_DO:			Nothing to do
 * @FWUPD_ERROR_NOT_SUPPORTED:			Action was not possible
 * @FWUPD_ERROR_SIGNATURE_INVALID:		Signature was invalid
 * @FWUPD_ERROR_AC_POWER_REQUIRED:		AC power was required
 * @FWUPD_ERROR_PERMISSION_DENIED:		Permission was denied
 *
 * The error code.
 **/
typedef enum {
	FWUPD_ERROR_INTERNAL,			/* Since: 0.1.1 */
	FWUPD_ERROR_VERSION_NEWER,		/* Since: 0.1.1 */
	FWUPD_ERROR_VERSION_SAME,		/* Since: 0.1.1 */
	FWUPD_ERROR_ALREADY_PENDING,		/* Since: 0.1.1 */
	FWUPD_ERROR_AUTH_FAILED,		/* Since: 0.1.1 */
	FWUPD_ERROR_READ,			/* Since: 0.1.1 */
	FWUPD_ERROR_WRITE,			/* Since: 0.1.1 */
	FWUPD_ERROR_INVALID_FILE,		/* Since: 0.1.1 */
	FWUPD_ERROR_NOT_FOUND,			/* Since: 0.1.1 */
	FWUPD_ERROR_NOTHING_TO_DO,		/* Since: 0.1.1 */
	FWUPD_ERROR_NOT_SUPPORTED,		/* Since: 0.1.1 */
	FWUPD_ERROR_SIGNATURE_INVALID,		/* Since: 0.1.2 */
	FWUPD_ERROR_AC_POWER_REQUIRED,		/* Since: 0.8.0 */
	FWUPD_ERROR_PERMISSION_DENIED,		/* Since: 0.9.8 */
	/*< private >*/
	FWUPD_ERROR_LAST
} FwupdError;

GQuark		 fwupd_error_quark			(void);
const gchar	*fwupd_error_to_string			(FwupdError	 error);
FwupdError	 fwupd_error_from_string		(const gchar	*error);

#endif /* __FWUPD_ERROR_H */
