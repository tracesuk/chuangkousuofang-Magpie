#pragma once

namespace Magpie {

struct FileDialogHelper {
	static std::optional<std::wstring> OpenFileDialog(
		IFileDialog* fileDialog,
		FILEOPENDIALOGOPTIONS options = 0
	) noexcept;
};

}
