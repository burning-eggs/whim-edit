require 'customizations'

utils = { }

-- The list of platforms differ depending on he specified action
function utils.get_platforms()
	if _ACTION == 'android-studio' then
		return { }
	end

	if os.ishost( 'windows' ) then
		return os.is64bit() and { 'x64', 'x86' } or { 'x86' }
	end

	local arch = os.outputof( 'uname -m' )
	return { arch }
end

-- Return an iterator for the allowed systems
function utils.each_system()
	local field = premake.field.get( 'system' )
	local i

	return function()
		i = next( field.allowed, i )
		return field.allowed[ i ]
	end
end'