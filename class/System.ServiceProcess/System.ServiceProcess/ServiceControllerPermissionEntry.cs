//
// System.ServiceProcess.ServiceControllerPermissionEntry.cs
//
// Authors:
//      Duncan Mak (duncan@ximian.com)
//	Sebastien Pouliot  <sebastien@ximian.com>
//
// (C) 2003, Ximian Inc.
// Copyright (C) 2004 Novell, Inc (http://www.novell.com)
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
// 
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

using System.ComponentModel;
using System.Security.Permissions;

namespace System.ServiceProcess {

	[Serializable]
	public class ServiceControllerPermissionEntry {

		string machine_name;
		string service_name;
		ServiceControllerPermissionAccess permission_access;
		
		public ServiceControllerPermissionEntry ()
		{
			machine_name = ResourcePermissionBase.Local;
			service_name = ResourcePermissionBase.Any;
			permission_access = ServiceControllerPermissionAccess.Browse;
		}

		public ServiceControllerPermissionEntry (ServiceControllerPermissionAccess permissionAccess,
			string machineName, string serviceName)
		{
			ServiceControllerPermission.ValidateMachineName (machineName);
			ServiceControllerPermission.ValidateServiceName (serviceName);

			permission_access = permissionAccess;
			machine_name = machineName;
			service_name = serviceName;
		}

		public string MachineName {
			get { return machine_name; }
		}

		public string ServiceName {
			get { return service_name; }
		}

		public ServiceControllerPermissionAccess PermissionAccess {
			get { return permission_access; }
		}

		// look at MSDN library ResourcePermissionBaseEntry sample for the "design"

		internal ResourcePermissionBaseEntry GetBaseEntry ()
		{
			return new ResourcePermissionBaseEntry ((int) permission_access, new string[] { machine_name, service_name });
		} 
	}
}
