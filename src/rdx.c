/* @@@LICENSE
*
*      Copyright (c) 2012 Hewlett-Packard Development Company, L.P.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* LICENSE@@@ */

#include <rdx.h>

bool rdx_report_metadata_set_component(RdxReportMetadata md, const char *component)
{
	return true;
}

bool rdx_report_metadata_set_cause(RdxReportMetadata md, const char *cause)
{
	return true;
}

bool rdx_report_metadata_set_detail(RdxReportMetadata md, const char *detail)
{
	return true;
}

bool rdx_report_metadata_set_payload_filename(RdxReportMetadata md, const char *filename)
{
	return true;
}

RdxReportMetadata create_rdx_report_metadata()
{
        return 0;
}

bool destroy_rdx_report_metadata(RdxReportMetadata md)
{
	return true;
}

bool make_room_for_new_trigger()
{
	return true;
}

bool rdx_make_report_from_file(RdxReportMetadata md, const char *path)
{
	return true;
}

bool rdx_make_report(RdxReportMetadata md, const char *contents)
{
	return true;
}
